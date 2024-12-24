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
Node *removedupliacte(Node *head)
{
    Node *a = head;
    Node *b = head->next;
    while (b != NULL)
    {
        while (a->val == b->val)
        {
            b = b->next;
        }
        a->next = b;
        a = b;
        b = a->next;
    }
    a->next = NULL;
    return head;
}
int main()
{
    Node*a=new Node(1);
    Node*b=new Node(1);
    Node*c=new Node(2);
    // Node*d=new Node(3);
    // Node*e=new Node(3);
    // Node*f=new Node(3);
    // Node*g=new Node(4);
    // Node*h=new Node(4);
    // Node*i=new Node(5);
    a->next=b;
    b->next=c;
    // c->next=d;
    // d->next=e;
    // e->next=f;
    // f->next=g;
    // g->next=h;
    // h->next=i;
    Node*temp=removedupliacte(a);
    display(temp);

}