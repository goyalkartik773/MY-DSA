#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[3][3]={1,2,3,4,9,6,7,8,0};
    int max=INT_MIN;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(max<arr[i][j])
            {
                max=arr[i][j];
            }
        }
    }
    cout<<"The maximum value of the 2darray is "<<max;
}