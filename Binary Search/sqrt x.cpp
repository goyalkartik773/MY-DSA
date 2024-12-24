#include <iostream>
using namespace std;
int mySqrt(int x)
{
    int low = 0;
    int high = x;
    int flag = false;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (x == mid * mid)
        {

            return mid;
            break;
        }
        else if (x < mid * mid)
            high = mid - 1;
        else if (x > mid * mid)
            low = mid + 1;
    }
    return high;
}
int main()
{
    int x = 20;
    cout << mySqrt(x);
}