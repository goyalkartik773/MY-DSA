#include <iostream>
#include <vector>
using namespace std;
void sortm1(vector<int> &v)
{
    cout <<"\nWelcome to two pointer approach of sorting\n";
    int i = 0, temp;
    int j = v.size() - 1;
    while (i < j)
    {
        if (v[i] == 1 && v[j] == 0)
        {
            temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++, j--;
        }
        else if (v[i] == 0 && v[j] == 1)
            i++, j--;
        else if (v[i] == 0 && v[j] == 0)
            i++;
        else if (v[i] == 1 && v.at(j) == 1)
            j--;
    }
}
void sortm2(vector<int> &v)
{
    cout <<"\nwelecome to two pass method of sorting \n";
    int noz = 0;
    int noo = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v.at(i) == 0)
            noz++;
        else
            noo++;
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (i < noz)
        {
            v.at(i) = 0;
        }
        else
            v.at(i) = 1;
    }
}
void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
}
int main()
{
    vector<int> v{1, 1, 0, 1, 0, 1, 1, 0};
    sortm2(v);
    display(v);
}