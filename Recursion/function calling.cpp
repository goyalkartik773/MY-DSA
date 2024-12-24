#include <iostream>
using namespace std;
// void gun()
// {
//     cout<<"Hello world\n";
//     gun();// function calling function infinitely segmentation fault
// }
void gun(int n)
{   if(n==0)// base case
     return ;
    cout<<"Hello world\n";
    gun(n-1);// function calling function recursively
}
void fun()
{
    cout<<"My name is kartik\n";
    gun(4);
    cout<<"HEllo kartik\n";
}
int main()
{
   fun();
}