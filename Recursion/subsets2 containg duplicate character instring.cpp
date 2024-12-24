#include <iostream>
#include <vector>
#include <string>
using namespace std;
void storesubset2(string ans, string orignal, vector<string> &finalans, bool flag)
{
    // if (orignal.length() == 0)
    // {
    //     str.push_back(ans);
    //     return;
    // }
    // char ch = orignal[0];
    // if (orignal.length() == 1)
    // {
    //     if (flag == true)
    //         storesubset2(ans + ch, orignal.substr(1), str, true);
    //     storesubset2(ans, orignal.substr(1), str, true);
    //     return;
    // }
    // char dh = orignal[1];
    // if (ch == dh) // duplicate element is present in string
    // {
    //     if (flag == true)
    //         storesubset2(ans + ch, orignal.substr(1), str, true);
    //     storesubset2(ans, orignal.substr(1), str, false);
    // }
    // else
    // {
    //     if (flag == true)
    //     storesubset2(ans + ch, orignal.substr(1), str, true);
    //     storesubset2(ans, orignal.substr(1), str, true);
    // }

    // optimise code

      if(orignal.size()==0)
    {
        finalans.push_back(ans);
        return;
    }
    char ch=orignal[0];
    char dh=orignal[1];
    if(ch==dh)
    {
        if(flag==true) // jo mai intially bhejunga hii 
        storesubset2(ans+ch,orignal.substr(1),finalans,true);  // left call to lagegi 
        storesubset2(ans,orignal.substr(1),finalans,false);    // right call bhi lagegi per false bhejunga
    }
    else
    {
        if(flag==true) // matlab dono right or left call lagani hai  // agar flag false aya to left call nahi lagani or lagegi bhi nahi
        storesubset2(ans+ch,orignal.substr(1),finalans,true);
        storesubset2(ans,orignal.substr(1),finalans,true);  // right call lagani bhi hai or isse true bheja taki agga dono calls lag sake
    }
}
int main()
{
    string s1 = "0";
    vector<string> str;
    storesubset2("", s1, str, true);
    for (int i = 0; i < str.size(); i++)
    {
        cout << "{" << str[i] << "}" << endl;
    }
}