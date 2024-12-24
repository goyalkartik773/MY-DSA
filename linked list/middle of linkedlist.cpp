#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node()
    {
        next = NULL;
    }
    Node(int val)
    {
        this->val = val;
    }
};
Node *middleofnode(Node *head)  // method 1 size nikala fhir mid index nikala usse mid node nikala
{
    Node *temp = head;
    int size = 0;
    while (temp != NULL)
    {
        size++;
        temp = temp->next;
    }
    int idx = size / 2;
    temp = head;
    for (int i = 0; i < idx; i++)
    {
        temp = temp->next;
    }
    return temp;
}
Node* middleofnode2(Node*head)  // method 2 two pointer approach single pass method slow fast
{
//   // when linkedlist is of odd size;
//   Node*slow=head;
//   Node*fast=head;
//   // slow fast pointer dono ko head per rakh diya
//   while(fast->next!=NULL)
//   {
//     slow=slow->next;  //move slow by 1 position
//     fast=fast->next->next; // move fast by 2 position
//   }
//   return slow


// when linkedlist is of even size;
//   Node*slow=head;
//   Node*fast=head;
//   // slow fast pointer dono ko head per rakh diya
//   while(fast!=NULL)
//   {
//     slow=slow->next;  //move slow by 1 position
//     fast=fast->next->next; // move fast by 2 position
//   }
//   return slow

// for both the cases
  Node*slow=head;
  Node*fast=head;
  // slow fast pointer dono ko head per rakh diya
  while(fast!=NULL&&fast->next!=NULL) // fast null hote hi aage wali condition check nahi hogi seedha while loop break hoga agar fast->next=NULL likho ga to error aayega kyuki agar fast already null pai hai too exception error show hoga
  {
    slow=slow->next;  //move slow by 1 position
    fast=fast->next->next; // move fast by 2 position
  }
  return slow;
}
void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}
int main()
{
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    Node*temp=middleofnode2(a);
    display(temp);
}