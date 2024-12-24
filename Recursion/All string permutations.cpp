#include <iostream>
#include <string>
using namespace std;
void showpermutations(string ans, string orignal)
{
    int k = orignal.length();
    if (k == 0)
    {
        cout << ans << endl;
        return;
    }
    for (int i = 0; i < k; i++)
    {
        string temp = orignal.substr(0, i) + orignal.substr(i + 1);// position sai paheli wali left string ko add kardiya or right string ko add kardiya then send as orignal string agar orignal string ko change karta to wo permanent change hoti after single call
        showpermutations(ans + orignal.substr(i, 1), temp);
    }
}
int main()
{
    string s1 = "abcd";
    showpermutations("", s1);
}
