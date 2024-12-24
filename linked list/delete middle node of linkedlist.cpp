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
Node *deletemiddlenode(Node *head)
{
    // first step find that middle index means target node we will use single pass method
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    // second step slow node ko hi delete karna hai using value change method
     
    // handle case of linkedlist of size 2;
    if(slow->next==NULL&&head->next!=NULL)
    { head->next=NULL;
     return head;
    }
    // handle case of linkedlist of size 1;
    if(slow->next==NULL&&head->next==NULL)
    { 
     return NULL;
    }
    return head;
}
int main()
{
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);
    Node *f = new Node(60);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    Node *temp = deletemiddlenode(a);
    display(temp);
}