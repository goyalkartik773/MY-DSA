#include <iostream>
#include <vector>
using namespace std;
// void print(int arr[], int i, int n)
void print(vector<int>&arr,int i)
{
    if(arr.size()==i)
    {
        return;
    }
    cout<<arr[i]<<" ";
    print(arr,i+1);
}
// void print(int arr[], int n)
// {
//     if (n == 0)
//         return;
//     print(arr, n - 1);
//     cout << arr[n - 1] << " ";
// }
int main()
{
    vector<int> arr {1,2,3,4};
    //int arr[4] = {1, 2, 3, 4};
    // print(arr, 0, 4);
    print(arr, 0);

    // cout << endl;

    // for (int i = 0; i < 4; i++)
    //     cout << arr[i] << " ";

    // cout << endl;

    // for (int ele : arr)
    // {
    //     cout << ele << " ";
    // }
}