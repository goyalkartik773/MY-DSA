#include <iostream>
#include <vector>
using namespace std;
bool search(int matrix[5][5], int target)
{
    int row = 5;
    int col = 5;
    int i = 0;
    int j = col - 1;
    while (i <= row - 1 && j >= 0)
    {
        if (matrix[i][j] == target)
            return true;
        else if (matrix[i][j] > target)
            j--;
        else
            i++;
    }
    return false;
}
int main()
{
    int arr[5][5] = {1, 4, 7, 11, 15, 2, 5, 8, 12, 19, 3, 6, 9, 16, 22, 10, 13, 14, 17, 24, 28, 21, 23, 26, 30};
    int target;
    cout << "Enter the target value you want to search in the array";
    cin >> target;
    bool check = search(arr, target);
    if (check == true)
    {
        cout << "Element is present in array\n";
    }
    else
        cout << "Element is not present in array\n";
}
