#include <iostream>
#include <vector>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int x) : val(x), next(NULL) {}
};
Node *partition(Node *head, int x)
{ 
    Node *c = new Node(-1);
    Node *tempc = c;
    Node *d = new Node(-1);
    Node *tempd = d;
    while (head != NULL)
    {
        if (head->val < x)
        {
            tempc->next = head;
            head = head->next;
            tempc = tempc->next;
        }
        else
        {
            tempd->next = head;
            head = head->next;
            tempd = tempd->next;
        }
    }
    tempc->next=d->next;
    tempd->next=NULL;
    return c->next;
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
    Node *b = new Node(80);
    Node *c = new Node(40);
    Node *d = new Node(30);
    Node *e = new Node(60);
    Node *f = new Node(70);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    Node*temp=partition(a,41);
    display(temp);
}