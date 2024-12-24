#include <iostream>
using namespace std;
int partition(int arr[], int startidx, int endidx)
{
    int pvtele = arr[startidx];
    int count = 0;
    for (int i = startidx + 1; i <= endidx; i++)
    {
        if (pvtele >= arr[i])
            count++;
    }
    int pvtidx = count + startidx;
    swap(arr[startidx], arr[pvtidx]);
    int i = startidx;
    int j = endidx;
    while (i < pvtidx && j > pvtidx)
    {
        if (arr[i] > pvtele && arr[j] < pvtele)
        {
            swap(arr[i], arr[j]);
            i++, j--;
        }
        else if (arr[i] <= pvtele)
            i++;
        else if (arr[j] > pvtele)
            j--;
    }
    return pvtidx;
}
void quicksort(int arr[], int startidx, int endidx)
{
    if (startidx >= endidx)
        return;
    int pvtidx = partition(arr, startidx, endidx);
    // pivot index ke sath ye array ko change karega
    // pivotidx ke piche ke elements pivot ke equal ya usse chote honge or pivot sai aage element usse bade honge
    quicksort(arr, startidx, pvtidx - 1);
    quicksort(arr, pvtidx + 1, endidx);
}
int main()
{
    // quick sort is inbuilt sort function whose time complexity is o(nlogn) for medium cases;
    // for worst cases its time complexity is o(n2);
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int ele : arr)
        cout << ele << " ";
    quicksort(arr, 0, size - 1);
    cout<<endl;
    for (int ele : arr)
        cout << ele<<" ";
}