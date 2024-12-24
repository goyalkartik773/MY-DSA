#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int> &a, vector<int> &b,vector<int> &v)
{    
    int n=a.size();
    int m=b.size();
    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
    {
        if (a[i] <= b[j])
        {
            v[k] = a[i];
            i++;
        }
        else // arr[j]<brr[i]
        {
            v[k] = b[j];
            j++;
        }
        k++;
    }
    if (i == n)
    {
        while (j < m)
        {
            v[k] = b[j];
            j++, k++;
        }
    }
    if (j == m)
    {
        while (i < n)
        {
            v[k] = a[i];
            i++, k++;
        }
    }
}
void mergesort(vector<int> &v)
{
    int n = v.size();
    if (n == 1)
    {
        return;
    }
    int n1 = n / 2;
    int n2 = n - n / 2;
    vector<int> a;
    vector<int> b;
    for (int i = 0; i < n1; i++)
        a.push_back(v[i]);
    for (int i = n1; i < n; i++)
        b.push_back(v[i]);
    mergesort(a);
    mergesort(b);
    merge(a,b,v);
    a.clear();
}
int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> v(arr, arr + n);
    for (int ele : v)
        cout << ele << " ";
    cout << endl;
    mergesort(v);
    for (int ele : v)
        cout << ele << " ";
}