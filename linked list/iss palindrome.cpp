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
Node *reverselinkedlist(Node *head)
{
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
bool isPalindrome(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    // left middle of the node find karraha huu
    while (fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    Node *b = slow->next;
    slow->next = NULL;
    Node *c = reverselinkedlist(b);
    while (head != NULL && c != NULL)
    {
        if (head->val != c->val)
            return false;
        head = head->next;
        c = c->next;
    }
    // Node *temp = head;
    // Node *c = new Node(-1);
    // Node *tempc = c;
    // while (temp != NULL)
    // {
    //     Node *t = new Node(temp->val);
    //     tempc->next = t;
    //     temp = temp->next;
    //     tempc = tempc->next;
    // }
    // tempc->next = NULL;
    // Node *d = reverselinkedlist(c->next);
    // display(d);
    // while (head != NULL && d != NULL)
    // {
    //     if (head->val != d->val)
    //         return false;
    //     head = head->next;
    //     d = d->next;
    // }
    return true;
}
int main()
{
    Node *a = new Node(1);
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(2);
    Node *e = new Node(1);
   // Node *f = new Node(1);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
   // e->next = f;
    if (isPalindrome(a))
        cout << "PAlLINDROME\n";
    else
        cout << "NOT PALLINDROME\n";
}