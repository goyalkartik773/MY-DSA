#include <iostream>
using namespace std;
int fibo(int n)
{
    if(n==1)
    return 0;
    else if(n==2)
    return 1;
    return fibo(n-2)+fibo(n-1);
}
int main()
{
    // int a = 1;
    // int b = 0;
    // int sum = 0;
    int n;
    cout << "Enter the value of n";
    cin >> n;
    // for (int i = 1; i <= n; i++)
    // {

    //     b = a;
    //     a = sum;
    //     sum = a + b;
    //     cout << sum << " ";
    // }
    for(int i=1;i<=n;i++)
    {
        cout<<fibo(i)<<" ";
    }
    
}