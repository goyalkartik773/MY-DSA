#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v{1, 2, 3, 4, 5};
    vector<int> b;
    int temp;
    for (int i = 0; i < v.size(); i++)
    {
        b.push_back(v.at(i));
    }
    for (int i = 0; i < b.size()/2; i++)
    {
        temp = b.at(i);
        b.at(i) = b.at(b.size() - 1-i);
        b.at(b.size() - 1-i) = temp;
    }

    cout << "Orignal matrix before reversing is " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "\ncopied matrix after reversing is " << endl;
    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << " ";
    }
}