#include <iostream>
using namespace std;
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
void insertionsort(Node *head)
{
    int size = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        size++;
        temp = temp->next;
    }
    for (int i = 1; i < size; i++)
    {
        int j = i;
        while (j > 0)
        {
            Node *x = getnode(head, j);
            Node *y = getnode(head, j - 1);
            if (x->val <= y->val)
                break;
            else
                swap(x->val, y->val);
            j--;
        }
    }
}
void display(Node *head)
{  
     Node *temp = head;
    while (temp != NULL)
    {
       
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout<<endl;
}
int main()
{
    Node *a = new Node(5);
    Node *b = new Node(4);
    Node *c = new Node(3);
    Node *d = new Node(2);
    Node *e = new Node(1);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    display(a);
    insertionsort(a);
    display(a);


}
