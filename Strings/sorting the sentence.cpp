#include <iostream>
#include <vector>
#include<string>
using namespace std;
string sortSentence(string s)
{
    vector<string> str(10);
    string temp;
    int idx = 0;
    int count = 0;
    while (idx < s.size())
    {
        if (s[idx] == ' ') // agar aap string ke space tak pahuch jata ho to apko apne vector ke andar use dalna hai
        {
            int pos = temp[temp.size() - 1]-'0'; // jo last position of temp hogi usme position of vector hogi jaha humme temp string store karni hai
            temp.pop_back();
            str[pos] = temp;
            temp.clear(); // clear kardo temp ko ek baar use karne ke baad humme dobara temp
            count++;      // it will count ki kitni strings add kar raha hu vector mai
        }
        else
            temp += s[idx];
        idx++;
    }
    int pos = temp[temp.size() - 1]-'0'; // jo last position of temp hogi usme position of vector hogi jaha humme temp string store karni hai
    temp.pop_back();
    str[pos] = temp;
    temp.clear(); // clear kardo temp ko ek baar use karne ke baad humme dobara temp
    count++;
    for (int i = 1; i <= count; i++)
    {
        temp += str[i];
        temp += ' ';
    }
    temp.pop_back();
    return temp;
}
int main()
{
    string s = "is2 sentence4 This1 a3 ";
    cout << sortSentence(s);
}