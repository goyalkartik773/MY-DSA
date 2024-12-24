#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // vector<int> v;//nothing but a dynamic array;isme apko size pahela sai batana ki jaroorat nahi hoti
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // v.push_back(5);
    // for(int i=0;i<5;i++)
    // {
    //     cout<<v.at(i)<<" ";
    // }
    // vector<int> v;
    // int n,x;
    // cout<<"Enter no of elements in vector ";
    // cin>>n;
    // for(int i=0;i<n;i++)
    // {   
    //     cout<<"Enter "<<i+1<<" first element in vector"<<endl;
    //     cin>>x;
    //     v.push_back(x);
    // }
    //  for(int i=0;i<n;i++)
    // {
    //     cout<<v.at(i)<<" ";
    // }
    vector<int> v {1,2,3,4,5};
     cout<<"\nArray before poping back the elements"<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v.at(i)<<" ";
    }
    v.pop_back(); // it removes the last element of the vector;
    v.pop_back();
    cout<<"\nArray after poping back the elements"<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v.at(i)<<" ";
    } 

}