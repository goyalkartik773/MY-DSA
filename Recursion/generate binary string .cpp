#include <iostream>
using namespace std;
void binarystring(string str, int k)
{
    if (str.size() == k)
    {
        cout << str << endl;
        return;
    }
    binarystring(str + '0', k);
    if (str.size() == '0' || str[str.size() - 1] !='1' )
    binarystring(str + '1', k);
    // else if( str[str.size() - 1] == 0)
    // binarystring(str + '1', k);
}
int main()
{   // binary string without consequtive 1s
    binarystring("", 4);
}