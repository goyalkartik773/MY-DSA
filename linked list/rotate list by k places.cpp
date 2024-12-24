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
Node *rotatelist(Node *head,int k)
{
   if(head==NULL||head->next==NULL)
   return head;
   Node*temp=head;
   Node*tail;
   int size=0;
   while(temp!=NULL)
   {
      if(temp->next==NULL)
      {
        tail=temp;
      }
      size++;
      temp=temp->next;
   }
   temp=head;
   if(k>=size)
   k=k%size;
   int idx=size-k-1;
   for(int i=0;i<idx;i++)
   {
    temp=temp->next;
   }
   tail->next=head;
   head=temp->next;
   temp->next=NULL;
   return head;
}
int main()
{
    Node*a=new Node(1);
    Node*b=new Node(2);
    Node*c=new Node(3);
    Node*d=new Node(4);
    Node*e=new Node(5);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    Node*temp=rotatelist(a,5);
    display(temp);

}