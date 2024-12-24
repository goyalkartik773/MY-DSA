#include <iostream>
#include <vector>
#include <climits>
#include <math.h>
#include <algorithm>
using namespace std;
// int idx=-1;
// int maxi = INT_MIN;
// void printmax(vector<int> &arr, int i)
// {

//     if (arr.size() == i)
//     {
//         cout << maxi;
//         return;
//     }
//      if (maxi < arr[i])
//         {
//             maxi = arr[i];
//             idx=i;
//         }
//     printmax(arr, i + 1);
// }
// void printmax(vector<int> &arr, int i, int max)
// {
//     if (i==arr.size() )
//     {
//         cout << max;
//         return;
//     }
//     if (max < arr[i])
//         max = arr[i];
//     printmax(arr, i+1, max);
// }
//    int printmax(vector<int>& arr,int i,int max)
//    {
//       if(arr.size()==i)
//       return max;
//       if(max<arr[i])
//       max=arr[i];
//       return printmax(arr,i+1,max);

//    }
int printmax(vector<int> &arr, int idx)
{
    if (arr.size() == idx)
    {
        return INT_MIN;
    }
    return max(arr[idx], printmax(arr, idx + 1));
}
int main()
{
    vector<int> arr{1, 3, 5, 2};
    cout << printmax(arr, 0);
}