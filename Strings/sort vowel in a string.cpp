#include <iostream>
#include <vector>
using namespace std;
string sortVowels(string s)
{
    vector<int> lower(26, 0);
    vector<int> upper(26, 0);
    int index;
    string sortvowel;
    string ans;
    int idx = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            index = s[i] - 'a';
            lower[index]++;
        }
        else if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            index = s[i] - 'A';
            upper[index]++;
        }
    }

    for (int i = 0; i < upper.size(); i++)
    {
        while (upper[i] != 0)
        {
            sortvowel += char(65 + i);
            upper[i]--;
        }
    }
    for (int i = 0; i < lower.size(); i++)
    {
        while (lower[i] != 0)
        {
            sortvowel += char(97 + i);
            lower[i]--;
        }
    }

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            ans += sortvowel[idx];
            idx++;
        }
        else
            ans += s[i];
    }

    return ans;
}
int main()
{
    string s = "lYmpH"; // lower=ee  // upper=EO  //sorted string=EOee // sorted vowel final string lEOtcede
    cout<<sortVowels(s);
}