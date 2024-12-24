#include <iostream>
#include <vector>
using namespace std;
// vector<int> rele(vector<int> v, vector<int> arr, int idx)
// {
//     if (arr.size() == idx)
//     {
//         return v;
//     }
//     int ele = arr[idx];
//     if (ele != 1)
//     {
//         v.push_back(ele);
//         return rele(v, arr, idx + 1);
//     }
//     else
//         return rele(v, arr, idx + 1);
// }

//  string wali approach;

vector<int> rele(vector<int> ans,vector<int> orignal)
{
    if(orignal.size()==0)
    return ans;
    int ele=orignal[0];
    if(ele!=1)
    {
        ans.push_back(ele);  // iska return type void hota hai to isse direct function mai pass nahi karsakte
        orignal.erase(orignal.begin());
        return rele(ans,orignal);
    }
    else
    {
        orignal.erase(orignal.begin());
        return rele(ans,orignal);
    }

}
int main()
{
    vector<int> arr{1, 2, 3, 1, 1, 4, 1, 7};
    vector<int> v;
    vector<int> brr = rele(v, arr);
    for (int ele : brr)
    {
        cout << ele << " ";
    }
}