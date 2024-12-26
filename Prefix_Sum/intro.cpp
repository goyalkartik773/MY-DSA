#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4};
    // prefix sum of the array is pre[i] = arr[i] + pre[i-1];
    // single pass t-c -> O(N);
    int n = sizeof(arr) / sizeof(arr[0]);
    // int pre_sum[50];
    //    pre_sum[0]=arr[0];
    //    for(int i=1;i<n;i++){
    //     pre_sum[i] = pre_sum[i-1] + arr[i];
    //    }
    //    for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    //    }
    //    cout<<endl;
    //     for(int i=0;i<n;i++){
    //     cout<<pre_sum[i]<<" ";
    //    }

    // o(N^2) approach
    // for (int i = 0; i < n; i++)
    // {
    //     int sum = 0;
    //     for (int j = 0; j <= i; j++)
    //     {
    //         sum = sum + arr[j];
    //     }
    //     pre_sum[i] = sum;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << pre_sum[i] << " ";
    // }

    // suffix sum

    // int suff_sum[50];
    // suff_sum[n - 1] = arr[n - 1];
    // for (int i = n - 2; i >= 0; i--)
    // {
    //     suff_sum[i] = suff_sum[i + 1] + arr[i];
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << suff_sum[i] << " ";
    // }

    // prefix product
    int pre_prod[50];
    pre_prod[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        pre_prod[i] = pre_prod[i - 1] * arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << pre_prod[i] << " ";
    }
    cout<<endl;
    // suffix product
    int suff_prod[50];
    suff_prod[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        suff_prod[i] = suff_prod[i + 1] * arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << suff_prod[i] << " ";
    }
}