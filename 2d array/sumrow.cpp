#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[3][3]={{3,4,11},{2,12,1},{7,8,7}};
    // for(int i=0;i<3;i++)
    // {
    //     int sumrow=0;
    //     for(int j=0;j<3;j++)
    //     {
    //         sumrow+=arr[i][j];
    //     }
    //     cout<<"Sum of the "<<i+1<<"th row is "<<sumrow<<"\n";
    // }
    //largest row sum problem
    int max=INT_MIN;
    for(int i=0;i<3;i++)
    {
        int sumrow=0;
        for(int j=0;j<3;j++)
        {
         sumrow+=arr[i][j];
        }
        if(max<sumrow)
        {
            max=sumrow;
        }
    }
     cout<<"sum of the max row is "<<max<<"\n";
    
}