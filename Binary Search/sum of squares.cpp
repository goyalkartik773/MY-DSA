#include <iostream>
#include <math.h>
using namespace std;
bool isperfectsquare(int a)
{
    int b = sqrt(a);
    if (a == b * b)
        return true;
    else
        return false;
}
bool judgeSquareSum(int c)
{
    int x = 0;
    int y = c;
    while (x <= y)
    {
        if (isperfectsquare(x) && isperfectsquare(y)) // x+y =c hona chaiye humesha or agar x or y ka perfect square bhi exist karta hai to true return karo direct
            return true;
         if (!isperfectsquare(y))
        {
            y = int(sqrt(y)) * int(sqrt(y)); // y ko humesha piche le jana hai
            x = c - y;
        }
        else // x is not a perfect square // x ko humesha aga badna hai
        {
            x = int((sqrt(x) + 1)) * int((sqrt(x) + 1));
            y = c - x;
        }
    }
    return false;
}
int main()
{
    int x=5;
    if(judgeSquareSum(x))
    {
        cout<<" wow exist ! ";
    }
}