#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v={1,2,3,1,5};
    vector<int> b;
    int x,idx=-1;
    cout<<"Enter the last element of which you want the last occurance"<<endl;
    cin>>x;
    //method 1;
    // for(int i=0;i<v.size();i++)
    // {
    //     if(v.at(i)==x)
    //     b.push_back(i);
    // }
    // cout<<"Last occurance of element is "<<b.back()<<endl;
    //mrthod 2
    // for(int i=0;i<v.size();i++)
    // {
    //     if(v[i]==x)
    //     idx=i;
    // }
    // cout<<"Last occurance of element is "<<idx<<endl;
    //method 3(perfect)
    for(int i=v.size()-1;i!=0;i--)
    {
        if(v.at(i)==x)
        {
            cout<<"Last occurance of element is "<<i<<endl;
            break;
        }

    }
}