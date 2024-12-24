#include <iostream>
#include <vector>
using namespace std;
void change(vector<vector <int>> &v)// 2d vector mai koi size dena ki zaroorat nahi hai
{
  v[0][0]=100;
}
int main()
{  // 2d vector mai app dyanmic columns create kar sakte hai;
    vector<vector<int>> v;// 2d vector containing 3 1d vector
    vector<int> v1 {1,2,3};
    vector<int> v2{4,5};
    vector<int> v3{6,7,8,9,10};
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
   // cout<<v.size()<<endl;   print no of rows in 2d vector
    for(int i=0;i<v.size();i++)
    {
      for(int j=0;j<v[i].size();j++)  // har row ka jo size hoga wahi har column ka size hoga
      {
        cout<<v[i][j]<<" ";
      }
      cout<<endl;
    }
    // cout<<v[0][0]<<endl;
    // change(v);
    // cout<<v[0][0]<<endl;
    int m,n;
    cout<<"Enter no of rows";
    cin>>m;
    cout<<"Enter no of columns";
    cin>>n;
 vector<vector<int>>arr(m,vector<int>(n,0));  // user defined declaration of 2d vector intially sare elements ki value 0 hai

}