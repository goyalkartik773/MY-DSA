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
Node *intersectionoftwo(Node *headA, Node *headB)
{
    int sizeA = 0;
    int sizeB = 0;
    Node *temp = headA;
    // calculating the size of linked list a
    while (temp != NULL)
    {
        sizeA++;
        temp = temp->next;
    }
    // calculating the size of linkedlist b
    temp = headB;
    while (temp != NULL)
    {
        sizeB++;
        temp = temp->next;
    }
    if (sizeA > sizeB) // jis list ka size bada hai usko fast node bolunga kyuki usko thoda aaga lekar ayunga
    {
        Node *fast = headA;
        Node *slow = headB;
        int idx = sizeA - sizeB; // fast node ko difference jitna aaga pahela hi le aao
        for (int i = 0; i < idx; i++)
        {
            fast = fast->next;
        }
        while (fast != slow)
        {
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
    else if (sizeA <= sizeB)
    {
        Node *fast = headB;
        Node *slow = headA;
        int idx = sizeB - sizeA; // fast node ko difference jitna aaga pahela hi le aao
        for (int i = 0; i < idx; i++)
        {
            fast = fast->next;
        }
        while (fast != slow)
        {
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
}
int main()
{
     // do list bna lena upper wala function ko call karna jo node return hogi wo intersection node hi hongi
}