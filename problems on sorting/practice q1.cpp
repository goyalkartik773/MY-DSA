#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    //     Given an array nums of size n, return the majority element.
    // The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.
    //
    // method 1 [easy]
     vector<int> v{1, 3, 2, 3, 3};
     int n = 5;
    // sort(v.begin(), v.end());
    // cout << v[n / 2]; // sort karne ke baad jo element array mai n/2 sai jada baar present hoga wo centre mai present hoga
    //method 2
    for(int i=0;i<n;i++)
    {
        int count =1;
        for(int j=i+1;j<n;j++)
        {
            if(v[i]==v[j])
            count++;

        }
        if(count>n/2)
        {
            cout<<v[i];
            break;
        }

    }
}