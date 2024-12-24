#include <iostream>
#include <string>
#include <vector>
using namespace std;
void reversestring(string &temp)
{
    int i = 0;
    int j = temp.size() - 1;
    char ch;
    while (i < j)
    {
        ch = temp[i];
        temp[i] = temp[j];
        temp[j] = ch;
        i++, j--;
    }
}
string reverseVowels(string s)
{
    string ans;
    string reversevowel;
    int idx = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            ans += s[i];
        }
    }
    reversestring(ans);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            reversevowel += ans[idx];
            idx++;
        }
        else
            reversevowel += s[i];
    }
    return reversevowel;
}
int main()
{
    string s = "leetcode";
    cout << reverseVowels(s);
}