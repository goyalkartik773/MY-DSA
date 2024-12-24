#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[3][3]={1,2,3,4,9,6,7,8,0};
    int sum=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum+=arr[i][j];
        }
    }
    cout<<"The sum of the 2darray is "<<sum;
}