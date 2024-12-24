#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int x) : val(x), next(NULL) {}
};
class Stack
{
public:
    Node *head;
    int Size;
    Stack()
    {
        head = NULL;
        Size = 0;
    }
    void push(int value)
    {
        Node *temp = new Node(value);
        temp->next = head;
        head = temp;
        Size++;
    }
    void pop()
    {
        head = head->next;
        Size--;
    }
    int top()
    {
        return head->val;
    }
    int size()
    {
        return Size;
    }
};
void display(Stack st)
{
    while(st.size()!=0)
    {
      cout<<st.top()<<" ";
      st.pop();
    }
}
int main()
{
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout<<st.top()<<endl;
    display(st);

}