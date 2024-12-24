#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "kartik";
    int i = 0;
    int j = str.size() - 1;
    bool flag = true;
    while (i < j)
    {
        if (str[i] != str[j])
        {
            flag = false;
            break;
        }
        i++, j--;
    }
    if (flag == true)
    {
        cout << "string is pallindrome";
    }
    else
        cout << "string is not pallindrome";

    // aap reverse string or orignal string ko compare karke bhi iss question ko kar sakte hai;
}