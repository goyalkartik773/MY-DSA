#include <iostream>
using namespace std;
class Node // user defined datatype
{
public:
    int val;
    Node *next;
    Node()
    {
        next = NULL;
    }
    Node(int val)
    {
        this->val = val;
    }
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
void deleteatidx(Node *head, int idx) // variation 1 jab index diya hoo node ka jo delete karni hai
{
    Node *temp = head;
    for (int i = 0; i < idx - 1; i++)
    {
        temp = temp->next;
    }
    temp->next = temp->next->next;
}
void deletetargetnode(Node *head, Node *target)  // variation 2 jab target node de rakha ho
{
    if (target == head)
        head = head->next;
    Node *temp = head;
    while (temp->next != target)
    {
        temp = temp->next;
    }
    temp->next = temp->next->next;
}
void deletetargetvalue(Node*head,int val)  // variation 3 jab target node ki value de rakha ho
{
    Node*temp=head;
    while(temp->next->val!=val)
    {
        temp=temp->next;
    }
    temp->next=temp->next->next;
}
void deletenode(Node*target)   // variation 4 jab target node hi given hooo
{
    target->val=target->next->val; // target node ki value hi udda di or usme next node ki value daal dii
    target->next=target->next->next; // target node sai agli node ka connection kaat diya or usse agli node sai jod diya
}

int main()
{
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    a->next = b;
    b->next = c;
    c->next = d;
    deletenode(c);
   // deleteatidx(a, 2);
    display(a);
}