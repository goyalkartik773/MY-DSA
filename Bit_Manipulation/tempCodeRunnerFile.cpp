#include <iostream>
#include <math.h>
using namespace std;
string decimal_to_binary(int n)
{
    string res = "";
    while (n != 0)
    {
        if (n % 2 == 0)
        {
            // number is even so add o
            res = res + '0';
        }
        else
        {
            res = res + '1';
        }
        n = n >> 1;
    }
    return res;
}
int max_power_2(int n)
{
    // iss n ko sare set bit ki form mai likh dunga
    n = (n | n >> 1);
    n = (n | n >> 2);
    n = (n | n >> 4);
    n = (n | n >> 8);
    n = (n | n >> 16);
    n = (n | n >> 32);
    return (n + 1) >> 1;
}
int main()
{
    int n = 35;
    // method -1
    // int count = 0;
    // string str = decimal_to_binary(n);
    // count = str.length()-1;
    // cout<<(1<<count);

    // method -2
    int temp;
    while (n != 0)
    {
        temp = n;
        n = (n & n - 1);
    }
    // cout<<temp;
    //  method -3
    cout << max_power_2(90);
}