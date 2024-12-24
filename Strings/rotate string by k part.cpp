#include <iostream>
#include <string>
using namespace std;
// void reversepart(string &str, int i, int j)
// {
//     char temp;
//     while (i < j)
//     {
//         temp = str[i];
//         str[i] = str[j];
//         str[j] = temp;
//         i++, j--;
//     }

// }
void reversestring(string &str, int k,int j)
{
    while (k != 0)
    {
        
        for (int i = 0; i < str.size()-1; i++)
           { swap(str[j - 1 - i], str[j - i]);}
        k--;
    }
}
int main()
{
    string str = "LEETCODE";
    cout << str << endl;
    string str1="DELEETCO";
    // reversepart(str,0,5);
    // reversepart(str,6,7);
    // reversepart(str,0,7);
    reversestring(str, 2,7);
    if(str==str1)
    cout<<"YES string are rotated by two place\n";
    cout << str;
}
