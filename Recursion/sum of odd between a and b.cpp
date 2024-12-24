#include <iostream>
using namespace std;
int sum(int a, int b)
{
    if (b % 2 != 0)        // odd b ke case mai mujhe usse bhi include karna hai to main chata hu ek baar recursion or chale
    { 
        if (a > b)
            return 0;
    }
    else
    {
        if (a >= b)
            return 0;
    }
    if (a % 2 != 0)
        return a + sum(a + 2, b);
    else
        return a + 1 + sum(a + 2, b);
}
int main()
{
    int a;
    int b;
    cout << "Enter the value of a";
    cin >> a;
    cout << "Enter the value of b";
    cin >> b;
    a = min(a, b);
    b = max(a, b);
    cout << sum(a, b);
}