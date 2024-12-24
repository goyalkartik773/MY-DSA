#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n";
    cin >> n;
    int arr[n][n];
    int minrow = 0;
    int maxrow = n - 1;
    int maxcol = n - 1;
    int mincol = 0;
    int count = 1;
    while (maxrow >= minrow && maxcol >= mincol)
    {
        for (int j = mincol; j <= maxcol; j++)
        {
            arr[minrow][j] = count++;
        }
        minrow++;
        for (int i = minrow; i <= maxrow; i++)
        {
            arr[i][maxcol] = count++;
        }
        maxcol--;
        for (int j = maxcol; j >= mincol; j--)
        {
            arr[maxrow][j] = count++;
        }
        maxrow--;

        for (int i = maxrow; i >= minrow; i--)
        {
            arr[i][mincol] = count++;
        }
        mincol++;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}