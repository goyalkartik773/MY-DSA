#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,5};
    int temp;
    // for(int i=0;i<v.size()/2;i++)
    // {
    //     temp=v.at(i);
    //     v.at(i)=v.at(v.size()-i-1);
    //     v.at(v.size()-i-1)=temp;
    // }
    // solving using two pointer approach;
    int i=0,j;
    j=v.size()-1;
    while(i<j)
    {
        temp=v.at(i);
        v.at(i)=v.at(j);
        v.at(j)=temp;
        i++;
        j--;
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}