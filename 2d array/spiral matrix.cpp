#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int matrix[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    int minrow = 0;
    int maxrow = 3;
    int mincol = 0;
    int maxcol = 3;
    int count = 0;
    while (maxrow >= minrow && maxcol >= mincol && count < 16)
    {
        for (int j = mincol; j <= maxcol; j++)
        {
            cout << matrix[minrow][j] << " ";  //right
            count++;
        }
        minrow++;
        for (int i = minrow; i <= maxrow; i++)
        {
            cout << matrix[i][maxcol] << " ";  //down
            count++;
        }
        maxcol--;
        for (int j = maxcol; j >= mincol; j--)
        {
            cout << matrix[maxrow][j]<<" ";           //left
            count++;
        }
        maxrow--;
        for (int i = maxrow; i >= minrow; i--)
        {
            cout << matrix[i][mincol]<<" ";           //up
            count++;
        }
        mincol++;
    }
}