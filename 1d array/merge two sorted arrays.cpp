#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v1{1, 4, 5, 8};
    vector<int> v2{2, 3, 6, 7, 10};
    int i = 0, x = v1.size();
    int j = 0, y = v2.size();
    int k = 0, z = x + y;
    vector<int> v3(z);
    while (i < x && j < y)
    {
        if (v1[i] < v2[j])
        {
            v3[k] = v1[i];
            k++, i++;
        }
        else if (v2[j] < v1[i])
        {
            v3[k] = v2[j];
            j++, k++;
        }
    }
    if (i == x)
    {
        while (j < y)
        {
            v3[k] = v2[j];
            k++, j++;
        }
    }
    if (j == y)
    {
        while (i < x)
        {
            v3[k] = v1[i];
            k++, i++;
        }
    }
    for (int p = 0; p < v3.size(); p++)
    {
        cout << v3[p] << " ";
    }
}