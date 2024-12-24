#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v(8,0);
    for(int i=0;i<v.size();i++)
    {
        cout<<v.at(i)<<" ";
    }
}