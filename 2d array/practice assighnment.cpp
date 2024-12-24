#include <iostream>
using namespace std;
int main()
{
    //     question 1 "print the sum of the rectangle formed in the given matrix whose two diagonal coordinates are given"
    //     int m, n, sum = 0;
    //     cout<< "Enter no of rows in matrix";
    //     cin >> m;
    //     cout<< "Enter no of columns in matrix";
    //     cin >> n;
    //     int arr[m][n];
    //     int l1, l2, r1, r2;
    //     cout << "Enter the coordinate index l1";
    //     cin >> l1;
    //     cout << "Enter the coordinate index r1";
    //     cin >> r1;
    //     cout << "Enter the coordinate index l2";
    //     cin >> l2;
    //     cout << "Enter the coordinate index r2";
    //     cin >> r2;
    //     for (int i = 0; i < m; i++)
    //     {
    //         for (int j = 0; j < n; j++)
    //         {
    //             cin >> arr[i][j];
    //         }
    //     }
    //     for (int i = min(l1, l2); i <= max(l1, l2); i++)
    //     {
    //         for (int j = min(r1, r2); j <= max(r1, r2); j++)
    //         {

    //             sum += arr[i][j];
    //         }
    //     }

    // cout << "sum of elements formed by the rectangle by the entered coordinates " << sum;

    // question 2 print the row with maximum sum
    // int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // int sumrow = 0;
    // int max = INT_MIN;
    // int index = 0;
    // for (int i = 0; i < 3; i++)
    // {
    //     sumrow = 0;
    //     for (int j = 0; j < 3; j++)
    //     {
    //         sumrow += arr[i][j];
    //     }
    //     if (max < sumrow)
    //     {
    //         max = sumrow;
    //         index = i;
    //     }
    // }
    // cout << "The maximum value of sum of row " << max << endl;
    // cout << "Maximum sum row no is " << index + 1;
    // question 3 print middle row and middle column elements of given matrix with odd dimension;
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == 1 || j == 1)
            {
                cout << arr[i][j] << " ";
            }
            else
                cout << " ";
        }
        cout << endl;
    }
}
