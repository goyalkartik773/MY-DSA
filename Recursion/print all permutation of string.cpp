#include <iostream>
#include<string>
#include<vector>
using namespace std;
void permutations(string ans,string orignal)
{
   if(orignal.length()==0)
   {
       cout<<ans<<endl;
       return;
   }
   // substr function sai mainstring ke andar koi change nahi hota
   for(int i=0;i<orignal.size();i++)
   { 
      char ch=orignal[i];
      string leftstr=orignal.substr(0,i);   // extract all the characters from orignal string from 0th position to ith position
      string rightstr=orignal.substr(i+1); // aage ke i+1 characters ko chodkar jo bachega string mai wo extract karke dedegi 
      permutations(ans+ch,leftstr+rightstr);
   }
}
int main()
{
    string str="abc";
    permutations("",str);
    return 0;
}