#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="Kartik";
    int i=0;
    int j=str.size()-1;
    char temp;
    // while(i<j)
    // {
    // //    temp=str[i];
    // //    str[i]=str[j];
    // //    str[j]=temp;
    // swap(str[i],str[j]);
    //    i++,j--;        
    // }
    for(int i=0;i<str.length()/2;i++)
    {
    //        temp=str[i];
    //    str[i]=str[j];
    //    str[j]=temp;
      swap(str[i],str[j-i]);
    }
    cout<<str;

    
}