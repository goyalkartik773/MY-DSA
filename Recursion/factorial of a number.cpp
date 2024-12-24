#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n == 1 || n == 0)
        return 1;
    return n * factorial(n - 1); // reccurance relation; // koi integer value hi return hogi
}
int main()
{
    int n;
    cout << "Enter the value of n upto which you want its factorial";
    cin >> n;
    cout << factorial(n);
}