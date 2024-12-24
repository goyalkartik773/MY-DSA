#include <iostream>
#include <vector>
#include <string>
using namespace std;
// void printsubset(string ans,string orignal)
// {   char ch=orignal[0];
//     if(orignal.length()==0)
//     {
//         cout<<"{"<<ans<<"}"<<" , ";
//         return;
//     }
//     printsubset(ans+ch,orignal.substr(1));
//     printsubset(ans,orignal.substr(1));
// }
void storesubset(string ans, string orignal, vector<string>& v)// pass by refrence karna jo v pass kiya tha usme changes nahi honga
{
    char ch = orignal[0];
    if (orignal.length() == 0)
    {
        v.push_back(ans);
        return;
    }
    storesubset(ans + ch, orignal.substr(1), v);
    storesubset(ans, orignal.substr(1), v);
}
int main()
{
    string s = "aaab";
    vector<string> v;
    // printsubset("",s);
    storesubset("", s, v);
    for (int i=0;i<v.size();i++)
    {cout << "{" << v[i] << "}" << " , ";}
}