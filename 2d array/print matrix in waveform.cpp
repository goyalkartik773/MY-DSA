#include <iostream>
using namespace std;
int main()
{
    int arr[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    cout << "\n";
    // for (int i = 0; i < 4; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         for (int j = 0; j < 4; j++)
    //         {
    //             cout << arr[i][j] << " ";
    //         }
    //         cout << endl;                           //print kiya hai bass orignal matrix mai
    //     }
    //     else
    //     {
    //         for (int j = 3; j >= 0; j--)
    //         {
    //             cout << arr[i][j] << " ";
    //         }
    //         cout << endl;
    //     }
    // }
    int temp;
    // for (int i = 0; i < 4; i++)
    // {
    //     if (i % 2 != 0)
    //     {
    //         int p = 0;
    //         int q = 3;
    //         while (p < q)                                   //permanent change in original matrix
    //         {
    //             temp = arr[i][p];
    //             arr[i][p] = arr[i][q];
    //             arr[i][q] = temp;
    //             p++, q--;
    //         }
    //     }
    // }
    cout << "\n \n";
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}