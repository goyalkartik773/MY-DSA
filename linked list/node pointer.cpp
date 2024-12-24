#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node()
    {
    }
    Node(int val)
    {
        this->val = val;
    }
};
// void display(Node *head)
// {
//     while (head != NULL)
//     {
//         cout << head->val << " ";
//         head = head->next; // aage bado linked list mai
//     }
//     cout << endl;
// }

// int size1(Node *head)
// {
//     int n = 0;
//     while (head != NULL)
//     {
//         head = head->next;
//         n++;
//     }
//     return n;
// }
// void displayrec(Node *head)
// {
//     if (head == NULL)
//         return; // basecase
//     cout << head->val << " ";
//     displayrec(head->next);
// }
void printreverse(Node* head)
{
    if(head==NULL)
    return;
    printreverse(head->next);
    cout<<head->val<<" ";

}
int main()
{
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    // cout << "SIZE of linked list is " << size1(a);
    // display(a);
    //  a->next->val               b->val;
    //  a->next->next->val         c->val;
    //  a->next->next->next->val   d->val;

    // Node *temp = a;
    // while (temp != NULL)
    // {
    //     cout << temp->val << " ";
    //     temp = temp->next;
    // }
    printreverse(a); // recursive after call
}