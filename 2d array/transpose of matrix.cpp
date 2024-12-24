#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter the no of rows ";
    cin >> m;
    cout << "Enter the no of columns ";
    cin >> n;
    int arr[m][n];
    int crr[n][m];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Enter the element whose index is " << "(" << i << "," << j << ")";
            cin >> arr[i][j];
        }
    }
    cout << "Matrix before transpose is\n";
    for (int i = 0; i < m; i++)
    {

        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            crr[i][j] = arr[j][i];
        }
    }
    cout << "\nMatrix after transpose is\n";
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {
            cout << crr[i][j] << " ";
        }
        cout << endl;
    }
}