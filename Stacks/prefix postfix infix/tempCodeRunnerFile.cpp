#include<iostream>
#include<stack>
using namespace std;
// t1 t2 operator
string prefix_to_postfix(string str)
{
    stack<string> st;
    int idx=str.size()-1;
    while(idx>=0)
    {
        if(str[idx]>='A'&&str[idx]<='Z'||str[idx]>='a'&&str[idx]<='z'||str[idx]>='0'&&str[idx]<='9')
        {
            st.push(string(1,str[idx]));
        }
        else
        {
            string ans;
            string t1=st.top();
            st.pop();
            string t2=st.top();
            st.pop();
            ans+=t1+t2+str[idx];
            st.push(ans);
        }
        idx--;
    }
    return st.top();
}
int main()
{
       string str="/-AB*+DEF";
       cout<<"prefix expression is "<<str<<endl;
       cout<<"postfix expression is "<<prefix_to_postfix(str);
}