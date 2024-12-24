#include <iostream>
#include <vector>
using namespace std;
class Stack
{
public:
    vector<int> arr;
    int Size;
    Stack()
    {
        Size = 0;
    }
    void push(int val)
    {
        arr.push_back(val);
        Size++;
    }
    void pop()
    {
        arr.pop_back();
        Size--;
    }
    int top()
    {
        return arr[Size - 1];
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
    cout << st.top();
    display(st);
}