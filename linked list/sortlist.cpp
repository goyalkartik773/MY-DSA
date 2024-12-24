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
Node *mergesort(Node *heada, Node *headb)
{
    if (heada == NULL && headb == NULL)
        return NULL;
    Node *c = new Node(-1);
    Node *tempc = c;
    while (heada != NULL && headb != NULL)
    {
        if (heada->val <= headb->val)
        {
            tempc->next = heada;
            tempc = tempc->next;
            heada = heada->next;
        }
        else
        {
            tempc->next = headb;
            tempc = tempc->next;
            headb = headb->next;
        }
    }
    if (heada == NULL)
        tempc->next = headb;
    else
        tempc->next = heada;
    return c->next;
}
Node *sortList(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    Node *slow = head;
    Node *fast = head;
    while (fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    Node *a = head;
    Node *b = slow->next;
    slow->next = NULL;
    a = sortList(a);
    b = sortList(b);
    Node *c = mergesort(a, b);
    return c;
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
    Node *a = new Node(1);
    Node *b = new Node(6);
    Node *c = new Node(3);
    Node *d = new Node(-1);
    Node *e = new Node(2);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    Node *temp = sortList(a);
    display(temp);
}