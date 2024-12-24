#include <iostream>
#include <vector>
using namespace std;
int longestPalindrome(string &s)
{
    if (s.size() == 1)
        return 1;
    vector<int> lowerarr(26, 0);
    vector<int> upperarr(26, 0);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a')
            lowerarr[s[i] - 'a']++;
        else
            upperarr[s[i] - 'A']++;
    }
    int sum = 0;
    bool flag = false;
    for (int i = 0; i < lowerarr.size(); i++)
    {
        if (lowerarr[i] % 2 == 0)
            sum = sum + lowerarr[i];
        else
        {
            sum += lowerarr[i] - 1;
            flag = true;
        }
        if (upperarr[i] % 2 == 0)
        {
            sum = sum + upperarr[i];
        }
        else
        {
            sum += upperarr[i] - 1;
            flag = true;
        }
    }
    if (flag == true)
    {
        sum += 1;
    }

    return sum;
}
int main()
{
    string s = "civilwartestingwhetherthatnaptionoranynartionsoconceivedandsodedicatedcanlongendureWeareqmetonagreatbattlefiemldoftzhatwarWehavecometodedicpateaportionofthatfieldasafinalrestingplaceforthosewhoheregavetheirlivesthatthatnationmightliveItisaltogetherfangandproperthatweshoulddothisButinalargersensewecannotdedicatewecannotconsecratewecannothallowthisgroundThebravelmenlivinganddeadwhostruggledherehaveconsecrateditfaraboveourpoorponwertoaddordetractTgheworldadswfilllittlenotlenorlongrememberwhatwesayherebutitcanneverforgetwhattheydidhereItisforusthelivingrathertobededicatedheretotheulnfinishedworkwhichtheywhofoughtherehavethusfarsonoblyadvancedItisratherforustobeherededicatedtothegreattdafskremainingbeforeusthatfromthesehonoreddeadwetakeincreaseddevotiontothatcauseforwhichtheygavethelastpfullmeasureofdevotionthatweherehighlyresolvethatthesedeadshallnothavediedinvainthatthisnationunsderGodshallhaveanewbirthoffreedomandthatgovernmentofthepeoplebythepeopleforthepeopleshallnotperishfromtheearth";
    vector<int> lowerarr(26, 0);
    vector<int> upperarr(26, 0);
    // for (int i = 0; i < s.size(); i++)
    // {
    //     if (s[i] >= 'a')
    //         lowerarr[s[i] - 'a']++;
    //     else
    //         upperarr[s[i] - 'A']++;
    // }
    // for (int ele : lowerarr)
    //     cout << ele << " ";
    // cout << endl;
    // for (int ele : upperarr)
    //     cout << ele << " ";

    cout << longestPalindrome(s);
}
