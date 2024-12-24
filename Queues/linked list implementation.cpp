#include <iostream>
using namespace std;
class Node
{
public:
    Node *next;
    int val;
    Node(int x) : val(x), next(NULL) {}
};
class queue
{
public:
    Node *head;
    Node *tail;
    int Size;

public:
    queue()
    {
        Size = 0;
        head = tail = NULL;
    }
    void push(int value)
    {
        // insert at tail hoga
        Node *temp = new Node(value);
        if (Size == 0)
        {
            head = tail = temp;
            Size++;
            return;
        }
        else
        {
            tail->next = temp;
            tail = temp;
            tail->next = NULL;
            Size++;
        }
    }
    void pop()
    {
        if (Size == 0)
        {
            cout << "Error -1\n";
            return;
        }
        Node*a=head;
        head = a->next;
        Size--;
        delete(a); // connection ke sath node bhi delete hogayi no wastage of memory

    }
    int front()
    {
        if (Size == 0)
        {
            cout << "Error -1\n";
            return -1;
        }
        return head->val;
    }
    int size()
    {
        return Size;
    }
    int back()
    {
        if (Size == 0)
        {
            cout << "Error -1\n";
            return -1;
        }
        return tail->val;
    }
};
void display(queue &q)
{
    Node *temp = q.head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    display(q);
    q.pop();

}