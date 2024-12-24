#include <iostream>
using namespace std;
// time and space complexity bigO(n) and time is also same;
class Node
{
public:
    int val;
    Node *next;
    Node(int x) : val(x), next(NULL) {}
};
Node *getnode(Node *head, int idx)
{
    Node *temp = head;
    for (int i = 0; i < idx; i++)
    {
        temp = temp->next;
    }
    return temp;
}
Node *reverseList(Node *head)
{
    // method 1 (by reversing the value of nodes in linked list not the node) array approach
    // time complexity of this code is O(n^2);
    // int size = 0;
    // Node *temp = head;
    // while (temp != NULL)
    // {
    //     size++;
    //     temp = temp->next;
    // }
    // int i = 0;
    // int j = size - 1;
    // int t;
    // while (i < j)
    // {
    //     Node *first = getnode(head, i);
    //     Node *last = getnode(head, j);
    //     t = first->val;
    //     first->val = last->val;
    //     last->val = t;
    //     i++, j--;
    // }
    // return head;

    // method2 three pointer approach timecomlexxity O(n);
    Node *prev = NULL, *curr = head, *nex = head;
    while (curr != NULL)
    {
        nex = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nex;
    }
    return prev;
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
    Node *temp = reverseList(a);
    display(temp);
}