#include <iostream>
#include <vector>
using namespace std;
void subarray(vector<int> ans, int arr[], int n, int idx)
{
    if (idx == n)
    {
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
        return;
    }
    subarray(ans, arr, n, idx + 1);
    if (ans.size() == 0 || (ans[ans.size() - 1] == arr[idx - 1]))
    { 
        ans.push_back(arr[idx]);
        subarray(ans, arr, n, idx + 1);
    }
}
int main()
{
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    // joo subset continous fashion mai hota hai usse subarray bolta hai
     //method 1 iterative 
    /*for(int i=0;i<n;i++)
     {
      for(int j=i;j<n;j++)
      {
        for(int k=i;k<=j;k++)
        {
        
          cout<<arr[k]<<" ";
        }
        cout<<endl;
      }
     }
    */
    
    vector<int> ans;
    subarray(ans, arr, n, 0);
}