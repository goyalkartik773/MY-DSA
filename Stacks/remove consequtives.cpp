#include<iostream>
#include<stack>
using namespace std;
string removeconsequtive(string str)
{
    stack<char>st;
    string ans;
    st.push(str[0]);
    for(int i=0;i<str.size();i++)
    {
        if(str[i]==st.top())
        {
            st.pop();
            st.push(str[i]);
        }
        else
        st.push(str[i]);
    }
    while(st.size()!=0)
    {
        ans+=st.top();
        st.pop();
    }
   return ans;
}
int main()
{
   string str="aaabbcddaabffg";
   cout<<removeconsequtive(str);

}