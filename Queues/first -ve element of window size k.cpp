#include <iostream>
#include <queue>
#include <vector>
using namespace std;
// void display(int arr[],int n,int k)
// {
//     vector<int> ans;
//     for (int i = 0; i <= n - k; i++)
//     {
//         bool flag = false;
//         for (int j = i; j < k + i && j <= n - 1; j++)
//         {
//             if (flag == true)
//                 break;
//             else if (arr[j] < 0)
//             {
//                 ans.push_back(arr[j]);
//                 flag = true;
//             }
//         }
//         if (flag == false)
//             ans.push_back(0);
//     }
//     for (int ele : ans)
//     cout << ele << " ";
// }
void display(vector<int> arr, vector<int> &ans, int k)
{
    queue<int> q;
    // step 1 first put -ve elements in queue
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < 0)
            q.push(i);
    }
    for (int i = 0; i < i + k && i <= arr.size() - k; i++)
    {
        while (q.size() != 0 && q.front() < i)
        {
            q.pop();
        }
        if (q.front() > i && q.front() >= i + k) // index window sai bahar hai
            ans.push_back(0);
        else // index window sai andar hai
            ans.push_back(arr[q.front()]);
    }
    for (int ele : ans)
        cout << ele << " ";
}
int main()
{
    int arr[] = {0, -1, -2, 3, 4, -5, 6, 4, 7, -8};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> v(arr, arr + n);
    vector<int> ans;
    display(v, ans, 3);
}