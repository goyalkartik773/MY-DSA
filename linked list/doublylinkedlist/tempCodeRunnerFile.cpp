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
class Linkedlist
{
public:
    Node *head;
    int size;
    Linkedlist()
    {
        head = NULL;
        size = 0;
    }
    void insert_at_head(int value)
    {
        Node *temp = new Node(value);
        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        size++;
    }
    void insert_at_tail(int value)
    {
        Node *temp = new Node(value);
        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            Node *t = head;
            while (t->next != NULL)
            {
                t = t->next;
            }
            t->next = temp;
            temp->prev = t;
        }
        size++;
    }
    void insert_at_idx(int idx, int value)
    {
        if (idx < 0 || idx > size)
        {
            cout << "Index out of bounds" << endl;
            return;
        }

        if (idx == 0)
        {
            insert_at_head(value);
            return;
        }
        if (idx == size)
        {
            insert_at_tail(value);
            return;
        }

        Node *temp = new Node(value);
        Node *t = head;
        for (int i = 0; i < idx - 1; i++)
        {
            t = t->next;
        }
        temp->next = t->next;
        t->next->prev = temp;
        t->next = temp;
        temp->prev = t;
        size++;
    }
    void delete_at_head()
    {
        head = head->next;
        head->prev = NULL;
        size--;
    }
    void delete_at_tail()
    {
        Node *temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        size--;
    }
    void delete_at_idx(int idx)
    {
        if (idx == 0)
        {
            delete_at_head();
            return;
        }
        else if (idx == size - 1)
        {
            delete_at_tail();
            return;
        }
        else
        {
            Node *t = head;
            for (int i = 0; i < idx - 1; i++)
            {
                t = t->next;
            }
            t->next = t->next->next;
            t->next->prev = t;
        }
        size--;
    }
    int get_at_idx(int idx)
    {
        Node *temp = head;
        for (int i = 0; i < idx; i++)
        {
            temp = temp->next;
        }
        return temp->val;
    }
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main()
{
    Linkedlist l1;
    l1.insert_at_head(10);
    l1.insert_at_idx(1, 20);
    l1.insert_at_tail(30);
    l1.insert_at_tail(40);
    l1.insert_at_tail(50);
    l1.display();
}
