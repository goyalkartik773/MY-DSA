#include <iostream>
#include <string>
using namespace std;
bool palindrome(string str, int i, int j)
{
    if (i == j)
        return true;
    if (str[i] == str[j])
    return  palindrome(str, i + 1, j - 1);
    else
        return false;
   //     return false;
    //   while(i!=j)
    //   {
    //     if(str[i]==str[j])
    //     i++,j--;
    //     else
    //     return false;
    //   }
    //   return true;
}
int main()
{
    string str = "racecar";

    if (palindrome(str, 0, str.size() - 1))
        cout << "YES STRING IS PALLINDROME\n";
    else
        cout << "NO STRING IS NOT PALLINDROME\n";
}