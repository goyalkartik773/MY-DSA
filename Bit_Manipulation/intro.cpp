#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int binary_to_decimal(string str)
{
    int n = str.size();
    int binary = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        int num = str[i] - '0'; // type cast decimal to integer
        // binary = binary + pow(2, n - i - 1) * num;
        binary = binary + (1 << (n - i - 1)) * num;
    }
    return binary;
}
string decimal_to_binary(int num)
{
    string ans = "";
    while (num != 0)
    {
        if (num % 2 == 0)
        {
            // even number hai to zero append karo ans mai
            ans = ans + '0';
        }
        else
        {
            // odd number hai to one append karo ans mai
            ans = ans + '1';
        }
        // num = num / 2;
        num = (num >> 1);
    }
    return ans;
}
int main()
{
    string str = "01000000";
    cout << binary_to_decimal(str);
    // int num = 5;
    // cout << decimal_to_binary(num);
}