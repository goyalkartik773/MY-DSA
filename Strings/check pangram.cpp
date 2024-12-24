#include <iostream>
#include <vector>
using namespace std;
bool checkIfPangram(string sentence)
{
    vector<int> arr(26, 0);
   // int index;
    for (int i = 0; i < sentence.size(); i++)
    {
        //index = 
        arr[sentence[i] - 'a'] = 1;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
         return false;
    }
    return true;
}
int main()
{
    string statement = "thequickbrownfoxjumpsoverthelazydog";
    bool flag = checkIfPangram(statement);
    if (flag == true)
    {
        cout << "All characters is present in string\n";
    }
    else
        cout << "All characters is not present in string\n";
}