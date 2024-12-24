#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int x) : val(x), next(NULL) {}
};
void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
// Node *getnode(int idx, Node *head)
// {
//     Node *temp = head;
//     for (int i = 0; i < idx; i++)
//     {
//         temp = temp->next;
//     }
//     return temp;
// }
Node *reverselinkedlist(Node *head)
{
    Node *previous = NULL;
    Node *current = head;
    Node *next = head;
    while (current != NULL)
    {
        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }
    return previous;
}
Node *reversepart(int left, int right, Node *head)
{ // method 2 break into three linked lists
    // first linkedlist is from 0 to left-1 // second linkedlist is from left to right// third linked list is from right+1 to null
    left = left - 1;
    right += -1;
    Node *tempa = head; // end node of a first linkedlist
    for (int i = 0; i < left - 1; i++)
    {
        tempa = tempa->next;
    }
    Node *b = tempa->next;  // starting node of second linkedlist
    Node *tempb = tempa->next; // end node of second linkedlist
    tempa->next = NULL;
    for (int i = left; i < right; i++)
    {
        tempb = tempb->next;
    }
    Node *c = tempb->next; // starting node of third linkedlist
    tempb->next = NULL;
    Node *b1 = reverselinkedlist(b);  // starting node of second reverse linked list
    tempa->next = b1; // combination of first and second reverse linked list
    // Node *t = head;   // last node of combination linkedlist to combine with third linked list
    // while (t->next != NULL)
    // {
    //     t = t->next;
    // }
    b->next = c;
    // method1 space and time complexity o(n)
    // int temp;
    // while (i < j)
    // {
    //     Node *first = getnode(i, head);
    //     Node *last = getnode(j, head);
    //     temp = first->val;
    //     first->val = last->val;
    //     last->val = temp;
    //     i++, j--;
    // }
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
    Node *g = new Node(70);
    Node *h = new Node(80);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;
    g->next = h;
    // display(a);
    Node *temp = reversepart(3, 5, a);
     display(a);
}