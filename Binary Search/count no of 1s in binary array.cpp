#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v{0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int n = v.size();
    // agar no of 1s count karne hai to 1 ki first occurance count karlo or usko size of array sai subtract karlo
    int low = 0;
    int high = n - 1;
    int firstoccurance=0;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (v[mid] == 1)
        {
            if (v[mid - 1] == 1)
                high = mid - 1;
            else
            {
                firstoccurance = mid;
                break;
            }
        }
        else if (v[mid] < 1)
        {
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    cout<<"NO of 1s in array are "<<n-firstoccurance;
}