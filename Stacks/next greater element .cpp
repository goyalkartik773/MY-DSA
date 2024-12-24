#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int main()
{
    vector<int> arr{3, 1, 2, 5, 4, 6, 2, 3};
    vector<int> ans;
    int n = arr.size();
    // // brute force time complexity O(N^2);// bahut hi bekar method hai donot use
    // for(int i=0;i<arr.size();i++)
    // {   int flag=false; // check whether greater element is present in array or not
    //     for(int j=i+1;j<arr.size();j++)
    //     {
    //         if(arr[i]<arr[j])
    //         {
    //              ans.push_back(arr[j]);
    //              flag=true;
    //              break;
    //         }
    //     }
    //     if(flag==false)
    //     ans.push_back(-1);
    // }
    // for(int ele: ans)
    // cout<<ele<<" ";

    // time complexity will be O(N) but an extra stack will be used
    // we donot know the value of next greater element for the last element so loop will start from end;
    stack<int> st;
    ans.push_back(-1);  // last element ka koi occurance nahi hai
    st.push(arr[n - 1]);
    for (int i = n - 2; i >= 0; i--)
    {
        while (st.size() != 0 && st.top() <= arr[i])
        {
            st.pop(); // humme next greater element chaiye agar st.top() perpadi value choti hai to wo kisi kaam ki nahi
        }
        if (st.size() == 0) // matlab uss element ka koi bhi next greater element nahi hai
            ans.push_back(-1);
        else
            ans.push_back(st.top());

        st.push(arr[i]);
    }
    // ulta answer print hoga push_back() ki wajah sai;
    for (int ele : ans)
        cout << ele << " ";
}