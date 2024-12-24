#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 4, 5, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int brr[] = {2, 3, 6, 7, 10, 12};
    int m = sizeof(brr) / sizeof(brr[0]);
    int crr[10];
    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
    {
        if (arr[i] <= brr[j])
        {
            crr[k] = arr[i];
            i++;
        }
        else // arr[j]<brr[i]
        {
            crr[k] = brr[j];
            j++;
        }
        k++;
    }
    if (i == n)
    {
        while (j < m)
        {
            crr[k] = brr[j];
            j++, k++;
        }
    }
    if (j == m)
    {
        while (i < n)
        {
            crr[k] = arr[i];
            i++, k++;
        }
    }
    for (int ele : crr)
        cout << ele << " ";
}