#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int main()
{
    int arr[3][4] = {{0, 0, 1, 1}, {1, 0, 1, 0}, {1, 1, 0, 0}};
    // step 1 agar kisi bhi row ka first element zero hai to puri row ko flip kardo
    int m = 3;
    int n = 4;
    for (int i = 0; i < m; i++)
    {
        if (arr[i][0] == 0)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[i][j] == 0)
                    arr[i][j] = 1;
                else
                    arr[i][j] = 0;
            }
        }
    }
    // step 2 agar kisi bhi column mai no of zeroes 1 sai jada ho to pura column ko flip kar do
    for (int i = 0; i < n; i++)
    {
        int noz = 0, noo = 0;
        for (int j = 0; j < m; j++)
        {
            if (arr[j][i] == 0)
                noz++;
            else
                noo++;
        }
        if (noz > noo)
        {
            for (int k = 0; k < m; k++)
            {

                // if (arr[k][i] == 0)
                //     arr[k][i] = 1;
                // else
                //     arr[k][i] = 0;
                arr[k][i] = 1 - arr[k][i];
            }
        }
    }
    int value = 0;
    for (int i = 0; i < m; i++)
    {   int x=1;
        for (int j = 0; j < n; j++)
        {
            // value += pow(2, j) * arr[i][n - j-1];
             value += x* arr[i][n - j-1];
             x*=2;
        }
    }
    cout << value;
}