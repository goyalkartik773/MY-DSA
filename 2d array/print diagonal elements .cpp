#include <iostream>
using namespace std;
int main()
{
    int arr[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 1, 2, 3, 4, 5, 6};
    // int m = 0;
    // int n = 3;
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         if (i == j)
    //         {
    //             if (m == n)
    //             {
    //                 m++, n--;
    //             }
    //             cout << arr[i][j];
    //         }
    //         else if (i == m && j == n)
    //         {
    //             cout << arr[i][j];
    //             m++, n--;
    //         }
    //         else
    //             cout << " ";
    //     }
    //     cout << endl;
    // }
    // method 2 better approach
    int n = 4;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i == j || i + j == n - 1)
            {
                cout << arr[i][j] << " ";
            }
            else
                cout << " ";
        }
        cout << endl;
    }
}