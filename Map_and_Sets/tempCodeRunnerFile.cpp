#include<iostream>
#include<map>
using namespace std;
int main()
{
   map<string,string> mp;
   mp["hlo"]="kartik";
   cout<<mp.size();
   cout<<endl;
   mp.erase("hlo");
   cout<<mp.size();
}