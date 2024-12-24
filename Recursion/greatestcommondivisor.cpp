#include <iostream>
using namespace std;
// int gcd(int m,int n,int i)
// {
//     if(i==1)
//     return 1;
//     if(m%i==0&&n%i==0)
//     return i;
//     else
//     return gcd(m,n,i-1);
// }
int gcd(int a, int b)
{
    if (b%a == 0)
        return a;
    return gcd(b%a, a);
}
int main()
{
    int n = 60;
    int m = 94;
    // time complexity of this code will be O(n) very bad;
    // cout<<gcd(m,n,min(m,n));
    // int idx;
    // for (int i = 1; i <= min(m, n); i++)
    // {
    //     if (m % i == 0 && n % i == 0)
    //         idx = i;
    // }
    // cout << idx;

    // using euclid division algorithm
    cout<<gcd(n,m);
}