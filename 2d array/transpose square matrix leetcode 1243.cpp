#include <iostream>
using namespace std;
int main()
{
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    cout << "\n matrix before transpose \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int temp;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(i<j)
            {
            temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
            }
        }
    }
    cout<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(j==0||j==1)
            {
                temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;

            }
        }
        cout << endl;
    }
cout<<endl;
for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}