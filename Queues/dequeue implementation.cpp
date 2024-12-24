#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int x) : val(x), next(NULL), prev(NULL) {}
};
class deque
{
public:
    Node *head;
    Node *tail;
    int Size;
    deque()
    {
        head = tail = NULL;
        Size = 0;
    }
    void addback(int value)
    {
        Node *temp = new Node(value);
        if (Size == 0)
        {
            head = tail = temp;
        }
        else
        {
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
            tail->next = NULL;
        }
        Size++;
        return;
    }
    void addfront(int value)
    {
        Node *temp = new Node(value);
        if (Size == 0)
        {
            head = tail = temp;
        }
        else
        {
            temp->next = head;
            head->prev = temp;
            head = temp;
            head->prev = NULL;
        }
        Size++;
        return;
    }
    int getfront()
    {
        if (Size == 0)
        {
            cout << "Error -1\n";
            return -1;
        }
        return head->val;
    }
    int getback()
    {
        if (Size == 0)
        {
            cout << "Error -1\n";
            return -1;
        }
        return tail->val;
    }
    void deletefront()
    {
        if (Size == 0)
        {
            cout << "Error -1\n";
            return;
        }
        Node *temp = head;
        head = head->next;
        delete (temp);
    }
    void deleteback()
    {
        if (Size == 0)
        {
            cout << "Error -1\n";
            return;
        }
        Node *temp = tail;
        tail = tail->prev;
        delete (temp);
    }
    int size()
    {
        return Size;
    }
};
void display(deque dq)
{
    while (dq.head != NULL)
    {
        cout << dq.head->val << " ";
        dq.head = dq.head->next;
    }
    cout<<endl;
}
int main()
{
    deque dq;
    dq.addfront(10);
    dq.addfront(20);
    dq.addfront(30);
    dq.addfront(40);
    dq.addfront(50);
     display(dq);
    dq.addback(1);
    dq.addback(2);
    dq.addback(3);
    dq.addback(4);
    dq.addback(5);
    
    display(dq);
    
}