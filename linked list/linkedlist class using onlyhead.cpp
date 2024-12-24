#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int x) : val(x), next(NULL) {}
};
class LinkedList
{
public:
    int size;
    Node *head;
    LinkedList()
    {
        size = 0;
        head = NULL;
    }
    void insert_at_head(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
        {
            head = temp;
            temp->next = NULL;
        }
        else
        {
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void insert_at_tail(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
        {
            head = temp;
            temp->next = NULL;
        }
        else
        {
            Node *x = head;
            while (x->next != NULL)
            {
                x = x->next;
            }
            x->next = temp;
            temp->next = NULL;
        }
        size++;
    }
    void insert_at_idx(int idx, int val)
    {
        Node *temp = new Node(val);
        if (idx == 0)
            insert_at_head(val);
        else if (idx == size)
            insert_at_tail(val);
        else
        {
            Node *t = head;
            for (int i = 0; i < idx - 1; i++)
            {
                t = t->next;
            }
            temp->next = t->next;
            t->next = temp;
        }
        size++;
    }
    int get_ele_atidx(int idx)
    {
        if (idx < 0 || idx >= size)
            return -1;
        else if (idx == 0)
            return head->val;
        else
        {
            Node *t = head;
            for (int i = 0; i < idx; i++)
            {
                t = t->next;
            }
            return t->val;
        }
    }
    void delete_at_head()
    {
        head = head->next;
    }
    void delete_at_idx(int idx)
    {
        if (idx == 0)
            delete_at_head();
        else
        {
            Node *t = head;
            for (int i = 0; i < idx - 1; i++)
            {
                t = t->next;
            }
            t->next = t->next->next;
        }
    }
    int sizeoflist()
    {
        return size;
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
    LinkedList l1;
    l1.insert_at_head(10);
    l1.insert_at_head(20);
    l1.insert_at_tail(40);
    l1.insert_at_idx(2, 30);
    l1.display(); // 20 10 30 40;
    l1.delete_at_head();
    l1.delete_at_idx(1);
    l1.display();                // 10 40
    cout << l1.get_ele_atidx(1); // 40
}