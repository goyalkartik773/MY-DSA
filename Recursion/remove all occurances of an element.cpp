#include <iostream>
#include <vector>
#include <climits>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;
// string removecharacter(string s1,string s2,int idx)
// {
//     if(idx==s1.length())
//     return s2;

//     if(s1[idx]!='a')
//     s2.push_back(s1[idx]);
//    //s2+s1[idx];

//     return removecharacter(s1,s2,idx+1);

// }
// void removecharacter(string s1, string s2, int idx)
// {
//     if (idx == s1.length())
//         return;

//     if (s1[idx] != 'a')
//         cout << s1[idx];
//     removecharacter(s1, s2, idx + 1);
// }
// void rchar(string ans, string original)
// {
//     char ch = original[0];  // har baar ch original string ke first character ko hi point karega hum original string ke aga sai ek ek character khatam karte jayega
//     if (original.length() == 0)
//     {
//         cout << ans;
//         return;
//     }
//     if (ch == 'a') // we donot want to include this character in our string
//     {
//         rchar(ans, original.substr(1));
//     }
//     else
//         rchar(ans + ch, original.substr(1));// first character of original string is not 'a' so append it
// }
void removecharacter(string s1, string s2, int idx)
{
    if (s2.length() == idx)
    {
        cout << s1;
        return;
    }
    char ch = s2[idx];
    if (ch != 'a')
        removecharacter(s1 + ch, s2, idx + 1);
    else
        removecharacter(s1, s2, idx + 1);
}
int main()
{
    string s1 = "karataika";
    removecharacter("", s1, 0);
    // removecharacter(s1, "", 0);
    // s1=s1.substr(1);// it will remove first character from string and store rest string in s1 string
    // cout<<s1;
}