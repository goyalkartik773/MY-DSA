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
class linkedlist // user defined data structure
{
public:
    Node *head;
    Node *tail;
    int size;
    linkedlist()
    {
        head = NULL;
        tail = NULL;
        size = 0;
    }
    void insert_at_tail(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
        {
            head = tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void insert_at_head(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void insert_at_idx(int idx, int val)
    {
        if (idx < 0 || idx > size)
        {
            cout << "Error:: size bound-1\n";
            return;
        }
        if (idx == 0)
            insert_at_head(val);
        else if (idx == size)
            insert_at_tail(val);
        else
        {
            Node *t = new Node(val);
            Node *temp = head;
            for (int i = 1; i < idx; i++)
            {
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }
    int get_at_idx(int idx)
    {
        if (idx < 0 || idx >= size)
        {
            cout << "error::\n";
            return -1;
        }
        if (idx == 0)
            return head->val;
        else if (idx == size - 1)
            return tail->val;
        else
        {
            Node *temp = head;
            for (int i = 0; i < idx; i++)
            {
                temp = temp->next;
            }
            return temp->val;
        }
        return -1;
    }
    void delete_at_head()
    {
        head=head->next;
        size--;
    }
    void delete_at_tail()
    {
        Node*temp=head;
        while (temp->next!=tail)
        {
            temp=temp->next;
        }
        tail=temp;
        tail->next=NULL;
        size--;
        
    }
    void delete_at_idx(int idx)
    {
        if(idx<0&&idx>=size)
        {
            cout<<"Error -1\n";
            return;
        }
        if(idx==0)
        delete_at_head();
        else if(idx==size-1)
        delete_at_tail();
        else
        {
            Node*temp=head;
            for(int i=0;i<idx-1;i++)
            {
                temp=temp->next;
            }
            temp->next=temp->next->next;
            size--;
        }
    }
    void display() // temp node banayega taki head node ki position change na ho jaye
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
    linkedlist l1;         // {}
    l1.insert_at_tail(10);  // {10}->{NULL};
    l1.insert_at_tail(20);  // {10}->{20}->{NULL};
    l1.insert_at_tail(30);  // {10}->{20}->{30}->{NULL};
    l1.insert_at_tail(40);  // {10}->{20}->{30}->{40}->{NULL};
    l1.insert_at_tail(50);  // {10}->{20}->{30}->{40}->{50}->{NULL};
    l1.insert_at_head(9); // {9}->{10}->{20}->{30}->{40}->{50}->{NULL};
    l1.display();
    l1.delete_at_idx(3);
    l1.display();
    // l1.insert_at_idx(2, 5);
    // l1.display(); //{9}->{10}->{5}->{20}->{30}->{40}->{50}->{NULL};
    // cout<<l1.get_at_idx(5);
}