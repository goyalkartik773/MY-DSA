#include<iostream>
#include<string>
using namespace std;
string removevowel(string s)
{   string temp;
    string ans;
      for(int i=0;i<s.size();i++)
      {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            temp+=s[i];  // optional temp string which stores all the vowels present in the string
        }
        else
        ans+=s[i];
      }
      return ans;
}
int main()
{
    string s="leetcodeisacommunityforcoders";
    cout<<removevowel(s);
}