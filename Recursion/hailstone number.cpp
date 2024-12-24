#include <iostream>
using namespace std;
void printhailstone(int n)
{
    if (n == 1)
    {
        cout << 1;
        return;
    }
    cout << n << " ";
    if (n % 2 != 0)
        printhailstone(3 * n + 1);
    else
        printhailstone(n / 2);
}
int main()
{
    printhailstone(12);
}