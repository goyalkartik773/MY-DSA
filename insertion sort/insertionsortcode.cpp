#include <iostream>
#include <vector>
using namespace std;
int main()
{        //insertion sort is a stable sort;
    vector<int> arr{5, 3, 1, 2, 4};
    int temp;
    for (int ele : arr)
    {
        cout << ele << " ";
    }
    cout<<endl;
    for (int i = 1; i < 5; i++)// ek element fix kardiya fhir uske age jo array hai wo unsorted hai 
    {
        for (int k = 0; k < i; k++)
        {
            if (arr[i] < arr[k])     //unsorted array ke ek ek element ko fixed element sai compare karke swap karte jao
            {
            //     temp=arr[i];
            //     arr[i]=arr[k];
            //     arr[k]=temp;
                 swap(arr[i], arr[k]);
            }
        }
    }
    for (int ele : arr)
    {
        cout << ele << " ";
    }

}