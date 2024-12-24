#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        // return type of above function is 2d vector
        vector<vector<int>> v;
        // 2d vector ka structure kuch aisa hi hoga
        for (int i = 1; i <= numRows; i++)
        {
            vector<int> a(i);
            v.push_back(a);
        }
        // filing of element in pascal triangle
        for (int i = 0; i < numRows; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                if (j == 0 || j == i)
                    v[i][j] = 1;
                else
                    v[i][j] = v[i - 1][j] + v[i - 1][j - 1];
            }
        }
        return v;
    }
};
int main()
{  Solution obj;
    int n;
    cout<<"Enter no of row in the pascal triangle ";
    cin>>n;
    vector<vector<int>>v=obj.generate(n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

}
