#include <iostream>
#include <vector>
using namespace std;
// 1d array ko sort karne wale tarike to laga hi sakte ho per yeh special method bhi laga sakte ho
int main()
{
    string str = "eabcabd";
    string sortstr;
    vector<int> alpha(26, 0);
    int index;
    for (int i = 0; i < str.size(); i++)
    {
        index = str[i] - 'a';
        alpha[index]++;
    }
    int idx = 0;
    for (int i = 0; i < alpha.size(); i++)
    {
        while (alpha[i] != 0)
        {
            sortstr += char(97 + i);
            alpha[i]--;
        }
    }
    cout << sortstr;
}