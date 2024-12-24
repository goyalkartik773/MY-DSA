#include <iostream>
#include <stack>
using namespace std;
bool balancedbracket(string str)
{
    stack<char> st;
    if (str.size() % 2 != 0) // agar string ka size odd hai to false return kardo
        return false;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '(')
            st.push(str[i]);
        else // ")" closed bracket mila;
        {
            if (st.size() == 0)
                return false;
            else
            {
                st.pop(); // close bracket ka pair pura hogya isliye
            }
        }
    }
    if (st.size() == 0) // matlab sare brackets ke pairs complete hai
        return true;
    else
        return false;
}
int main()
{
    string str = ")(";
    if (balancedbracket(str))
        cout << "Balanced Bracket";
    else
        cout << "Not a Balanced Bracket";
}