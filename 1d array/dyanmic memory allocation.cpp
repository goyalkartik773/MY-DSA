#include <iostream>
using namespace std;
int main()
{
    int rows, cols;
    cout << "Enter no of rows";
    cin >> rows;
    cout << "enter no of columns";
    cin >> cols;
    int **arr = new int *[rows];
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }
    // taking input
    int m = rows;
    int n = cols;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    // display();
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}