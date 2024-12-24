#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    // vector<int> v{19, 12, 23, 8, 16};

    // time and space complexity of using this approach is very bad

    // vector<int> a;
    // vector<int> b(5);
    // for (int i = 0; i < v.size(); i++)
    // {
    //     a.push_back(v[i]);
    // }
    // sort(a.begin(), a.end());
    // for (int i = 0; i < a.size(); i++)
    // {
    //     int count = 0;
    //     for (int j = 0; j < v.size(); j++)
    //     {
    //         if (a[i] == v[j])
    //         {
    //             b[i] = count;
    //         }
    //         else
    //             count++;
    //     }
    // }
    // for (int ele : b)
    // {
    //     cout << ele << " ";
    // }
    // method 2 with same time and space complexity
    vector<int> arr{19, 12, 23, 8, 16};
    for(int ele : arr)
    {
        cout<<ele<<" ";
    }
    cout<<endl;
    vector<int> v(5, 0);
    int x = 0;
    int n = 5;
    for (int i = 0; i < n; i++) // itni barr total loop chalega har ek baar loop chalna pai arr ki value change hoti jayegi
    {
        int min = INT_MAX;
        int mindex = -1;
        for (int j = 0; j < n; j++)
        {
            if (v[j] == 1) // wo position already checked hai or arr mai change karke min value index insert bhi kar diya isliye use abb check na karo continue sai direction iteration increase ho jayegi
                continue;
            else
            {
                if (min > arr[j])
                {
                    min = arr[j];
                    mindex = j;
                }
            }
        }
        arr[mindex] = x;
        v[mindex] = 1; // element check karliya hai isliye checkmarl use kar raha hu
        x++;
    }
    for(int ele : arr)
    {
        cout<<ele<<" ";
    }
}