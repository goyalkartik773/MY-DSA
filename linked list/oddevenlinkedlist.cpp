#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main()
{
    vector<int> arr{2, 4, 5, 8};
    int min = INT_MAX;
    for (int i = 0; i < arr.size()&&i+1<arr.size(); i++)
    {
        int diff = arr[i + 1] - arr[i];
        if (min > diff)
        min = diff;
    }
}