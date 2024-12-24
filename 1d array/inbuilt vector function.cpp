#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(12);
    v.push_back(-90);
    v.push_back(-45);
    v.push_back(15);
    v.push_back(-1);
    cout<<"Vector before sorting is "<<endl;
    for(int i=0;i<v.size();i++)
    {
          cout<<v.at(i)<<" ";
    }
    sort(v.begin(),v.end());
    cout<<"\nVector after sorting is "<<endl;
        for(int i=0;i<v.size();i++)
    {
          cout<<v.at(i)<<" ";
    }
    
}