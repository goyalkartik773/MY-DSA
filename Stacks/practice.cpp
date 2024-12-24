#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int x):val(x),next(NULL){}
};
class stack{
    private:
    Node*head;
    int size;
    public:
    stack()
    {
        size=0;
        head=NULL;
    }
    void push(int value)
    {
        Node*temp=new Node(value);
        if(size==0)
        {
           head=temp;
           head->next=NULL;
        }
        else{
            temp->next=head;
            head=temp;
        }
        size++;
    }
    void pop()
    {
        head=head->next;
        size--;
    }
    int top()
    {
          return head->val;
    }
    int Size()
    {
        return size;
    }
};
void display(stack &st)
{
    stack helper;
    while(st.Size()!=0)
    {
        cout<<st.top()<<" ";
        helper.push(st.top());
        st.pop();
    }
    while(helper.Size()!=0)
    {
        st.push(helper.top());
        helper.pop();
    }
}
int main()
{
    stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    display(st);
    
}