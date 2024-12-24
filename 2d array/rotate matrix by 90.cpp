#include <iostream>
// #include<vector>
using namespace std;
int main()
{
    int matrixc[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = 3;
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i < j)
            {
                temp = matrixc[i][j];
                matrixc[i][j] = matrixc[j][i];
                matrixc[j][i] = temp;
            }
        }
    }

    int x;
    for (int k = 0; k < n; k++)
    {
        int i = 0;
        int j = n - 1;
        while (i < j)
        {
            x = matrixc[k][i];
            matrixc[k][i] = matrixc[k][j];
            matrixc[k][j] = x;
            i++, j--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrixc[i][j] << " ";
        }
        cout << endl;
    }
}