#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int main()
{
    // stock span problem
    // kab tak stock ka price kissi din apne pichle dino sai bada raha
    // previous greatest index ka use karna hai;
    stack<int> st;
    int arr[] = {100, 80, 60, 81, 70, 60, 75, 85};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans[n];
    ans[0] = 1;
    st.push(0);
    for (int i = 1; i < n; i++)
    {
        while (st.size() != 0 && arr[st.top()] <= arr[i])
        {
            st.pop();
        }
        if (st.size() == 0)
            ans[i] = -1; // kabhi hoga nahi kyuki pahela din ka stock price largest hoga
        else
            ans[i] = i - st.top();
        st.push(i);
    }
    for (int ele : ans)
        cout << ele << " ";
}