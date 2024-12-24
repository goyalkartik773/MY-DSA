#include <iostream>
#include <stack> // stl library
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int x) : val(x), next(NULL)
    {
    }
};
void displaystack(stack<int> &st)
{
    stack<int> temp;
    while (st.size() != 0)
    {

        cout << st.top() << " ";
        temp.push(st.top());
        st.pop();
    }
    while (temp.size() != 0)
    {
        st.push(temp.top());
        temp.pop();
    }
    cout << endl;
}
void reversestackbyarray(stack<int> &st) // pass by refrence hai stack kyuki main stack ko hi change karna hai
{
    cout << "Reverse order:\n";
    int n = st.size();
    int arr[n]; // isme do stack bnanne ki koi jaroorat nahi hai
    int idx = 0;
    while (st.size() != 0)
    {
        arr[idx] = st.top();
        idx++;
        st.pop();
    }
    idx = 0;
    while (idx != n)
    {
        st.push(arr[idx]);
        idx++;
    }
}
void reversestackbylinkedlist(stack<int> &st)
{
    cout << "Reverse order:\n";
    Node*c=new Node(-1);
    Node*tempc=c;
    while (st.size() != 0)
    {
        Node *temp = new Node(st.top());
        tempc->next = temp;
        tempc=tempc->next;
        st.pop();
    }
    tempc->next=NULL;
    Node *head = c->next;
    while (head != NULL)
    {
        st.push(head->val);
        head = head->next;
    }
}
int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    displaystack(st);
    reversestackbylinkedlist(st);
     reversestackbyarray(st);
    displaystack(st);
}