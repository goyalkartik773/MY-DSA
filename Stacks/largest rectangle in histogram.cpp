#include <iostream>
#include <stack>
#include <vector>
using namespace std;
// each element of array is representing the height of the rectangle
// or largest area of rectangle humme nikalna hai area iss tarah sai chunnana ki bich mai space na hoo

// brute force method

// int largestRectangleArea(vector<int> &heights)
// {
//     int n=heights.size();
//     int arr[n]; // count of previous greatest element
//     arr[0]=0;
//     for(int i=n-1;i>=0;i--)
//     {  int count =0;
//        for(int j=i-1;j>=0;j--)
//        {
//            if(heights[i]<=heights[j])
//            count++;
//            else
//            break;
//        }
//        arr[i]=count;
//     }
//     for(int ele:arr)
//     cout<<ele<<" ";
//     cout<<endl;
//     int brr[n]; // count of next greatest element
//     for (int i = 0; i < n; i++)
//     {
//         int count = 0;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (heights[i] <= heights[j])
//             {
//                 count++;
//             }
//             else
//                 break;
//         }
//         brr[i] = count;
//     }
//     for(int ele:brr)
//     cout<<ele<<" ";
//     cout<<endl;
//     int sum[n]; // sum of count of next and previous greatest element in array
//     for (int i = 0; i < n; i++)
//     {
//         sum[i] = arr[i] + brr[i] + 1;
//     }
//     for(int ele:sum)
//     cout<<ele<<" ";
//     cout<<endl;
//     int ans[n]; // ans array will store the largest area of rectangle formed by each height
//     for (int i = 0; i < n; i++)
//     {
//       ans[i] = sum[i] * heights[i];
//     }
//     for(int ele:ans)
//     cout<<ele<<" ";
//     cout<<endl;
//     int max=INT_MIN;
//     for(int i=0;i<n;i++)
//     {
//         if(max<ans[i])
//         max=ans[i];
//     }
//     return max;
// }

// using stack

int largestRectangleArea(vector<int> &heights)
{
    int n = heights.size();
    int arr[n]; // count of previous smallest element
    stack<int> st;
    arr[0] = -1;
    st.push(0);
    for (int i = 1; i < n; i++)
    {
        while (st.size() != 0 && heights[st.top()] >= heights[i])
        {
            st.pop();
        }
        if (st.size() == 0)
            arr[i] = -1;
        else
            arr[i] = st.top();
        st.push(i);
    }
    for (int ele : arr)
        cout << ele << " ";
    cout << endl;
    while (st.size() != 0)
        st.pop();
    int brr[n]; // count of next smallest element
    brr[n - 1] = n;
    st.push(n - 1);
    for (int i = n - 2; i >= 0; i--)
    {
        while (st.size() != 0 && heights[st.top()] >= heights[i])
        {
            st.pop();
        }
        if (st.size() == 0)
            brr[i] = n;
        else
            brr[i] = st.top();
        st.push(i);
    }
    for (int ele : brr)
        cout << ele << " ";
    cout << endl;
    int sum[n]; // sum of count of next and previous smallest element in array
    for (int i = 0; i < n; i++)
    {
        sum[i] = brr[i] - arr[i] - 1;
    }
    for (int ele : sum)
        cout << ele << " ";
    cout << endl;
    int ans[n]; // ans array will store the largest area of rectangle formed by each height
    for (int i = 0; i < n; i++)
    {
        ans[i] = sum[i] * heights[i];
    }
    for (int ele : ans)
        cout << ele << " ";
    cout << endl;
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < ans[i])
            max = ans[i];
    }
    return max;
}
int main()
{
    vector<int> arr{2, 1, 5, 6, 2, 3};
    cout << largestRectangleArea(arr);
}
