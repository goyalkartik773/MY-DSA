#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int x) : val(x), next(NULL) {};
};
void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}
Node *removenthnode(Node *head, int k) // k is last node from last indexing will start from 1 not from 0
{
    // // first step calculate the size of the linkedlist
    // int size = 0;
    // Node *temp = head;
    // while (temp != NULL)
    // {
    //     size++;
    //     temp = temp->next;
    // }
    // if (size == k) // matlab first node ko remove karne ko bol raha hai
    //     return head->next;

    // temp = head;
    // // find idx means value of that node from front
    // int index = size - k + 1;
    // int idx = index - 1; // link list ki indexing 0 sai start hoti hai
    // // jo element remove karna hai usse sai ek pich temp ko le aao
    // for (int i = 0; i < idx - 1; i++)
    // {
    //     temp = temp->next;
    // }
    // temp->next = temp->next->next;
    // return head;


    // method 2 in one pass
    Node* slow=head;
    Node*fast=head;
    for(int i=0;i<k+1;i++)
    {    
         if(fast==NULL)  // handle case of size==n
         {
            return head->next;
         }
          fast=fast->next;
    }
   while(fast!=NULL)
   {
     slow=slow->next;
     fast=fast->next;
   }
   slow->next=slow->next->next;
   return head;
}
int main()
{
    Node *a = new Node(10);
    Node *b = new Node(20);
    // Node *c = new Node(30);
    // Node *d = new Node(40);
    // Node *e = new Node(50);
    // Node *f = new Node(60);
    a->next = b;
    // b->next = c;
    // c->next = d;
    // d->next = e;
    // e->next = f;
    Node *temp = removenthnode(a, 1);
    display(temp);
}