#include<iostream>
using namespace std;
int main()
{
    int arr[2][4];//  row 1 will represent rollno of 4 students and row 2 will represent marks of 4 students;
    string ch;
    string y="rollno";
    string x="marks";
    for(int i=0;i<2;i++)
    {    if(i<1) ch=y;
         else ch=x;
        for(int j=0;j<4;j++)
        {
            cout<<"Enter the "<<ch<<" "<<i;
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}