#include <iostream>
using namespace std;
int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int m, n;
    cout << "Enter no of rows";
    cin >> m;
    cout << "Enter no of columns";
    cin >> n;
    int brr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Enter element whose index is " << "(" << i << "," << j << ")";
            cin >> brr[i][j];
        }
    }
    cout << "Array 1 is " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Array 2 is " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }
}