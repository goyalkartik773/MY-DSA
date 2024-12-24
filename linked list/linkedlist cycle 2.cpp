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
Node* linkedlistcycle(Node *head)
{
    if (head == NULL)
        return NULL;
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next; // aap 3 4 kitne bhi steps sai aage bada sakte ho kyuki kabhi na kabhi to fast slow ko pakad hi lega
        if (slow == fast)
        {
          Node* t=head;
          while(t!=slow)
          {
            t=t->next;
            slow=slow->next;
          }
          return slow;           // jaha t or slow barabar honge wahi node linking start hui hai
        }
    }
    return NULL;
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
    f->next = c;
    Node*temp=linkedlistcycle(a);
    display(temp);
    
}