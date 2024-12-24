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
bool linkedlistcycle(Node *head)
{
    if (head == NULL)
        return false;
    Node *slow = head;
    Node *fast = head->next;
    while (fast != NULL &&fast->next != NULL)
    {
        slow=slow->next;
        fast=fast->next->next; // aap 3 4 kitne bhi steps sai aage bada sakte ho kyuki kabhi na kabhi to fast slow ko pakad hi lega
        if(slow==fast)
        return true;

    }
    return false;
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
    f->next=e;
    bool flag=linkedlistcycle(a);
    if(flag==true)
    cout<<"cycling is present in linked list cycle\n";
    else
    cout<<"cycling is not present in linked list cycle\n";
}