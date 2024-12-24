#include <iostream>
#include <conio.h>
using namespace std;
int main()
{       // selection sort is a unstable sort
    int k = 0, temp;
    int arr[5] = {5, 3, 1, 4, 2};
   // for each loop;
    for (int ele : arr)
    {
        cout << ele << " ";
    }
    cout << endl;

    for (int k = 0; k < 4; k++)  // itne passes mai ek apka array sort ho jayega
    {
        int min = INT_MAX;
        int count = 0;
        for (int i = k; i < 5; i++)  // operation ek array per itne ji lagega array chota hota jaa raha hai jaise jaise sorted hoga
        {
            if (min > arr[i])
            {
                min = arr[i];
                count = i;
            }
        }
        // temp = arr[k];
        // arr[k] = arr[count];
        // arr[count] = temp;
        swap(arr[k],arr[count]);
    }
    for (int ele : arr)
    {
        cout << ele << " ";
    }
}