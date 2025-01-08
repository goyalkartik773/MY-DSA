#include <iostream>
using namespace std;
class Solution
{
public:
    string decimal_to_binary(int n)
    {
        string res = "";
        while (n != 0)
        {
            if (n % 2 == 0)
            {
                // number is even so add o
                res = res + '0';
            }
            else
            {
                res = res + '1';
            }
            n = n >> 1;
        }
        return res;
    }
    int setBits(int n)
    {
        //  return __builtin_popcount(n);

        //   string binary = decimal_to_binary(n);
        int count1 = 0;
        //   for(int i=0;i<binary.size();i++){
        //       if(binary[i]=='1')
        //       count1++;
        //   }
        //   return count1;
        while (n != 0)
        {
            count1++;
            n = (n & n - 1);
        }
        return count1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;

        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
int main()
{
}