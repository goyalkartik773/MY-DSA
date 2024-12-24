#include <iostream>
#include <string>
using namespace std;
string reversepart(string str, int i, int j)
{
    char temp;
    while (i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++, j--;
    }
    return str;
}
int main()
{
    string str = "abcdefg"; // efg
    string ans;
    int count = 0;
    int k = 2;
    for (int i = 0; i < str.size(); i++)
    {
        count++;
        if (count == 2 * k)
        {
            ans = ans + reversepart(str.substr(0, count), 0, k - 1);
            str.erase(0,count-1);
            count = 0;
        }
         if (k < count < 2 * k)
        {
            ans = ans + reversepart(str, 0, k - 1);
            count = 0;
        }
    }
    cout << ans;
}
//  else  if(k<count<2*k)
//       {
//         reversepart(str,i-k,i-k+1);
//         count=0;
//       }
//     //   else if(count<k)
//     //   {

//     //   };