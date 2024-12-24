#include<iostream>
#include<climits>
using namespace std;
int main()
{
  int max=INT_MIN;
  int min=INT_MAX;
  int arr[5]={10,89,34,-90,7};
  for(int i=0;i<5;i++)
  {
    if(max<arr[i])
    max=arr[i];
  }
  for(int i=0;i<5;i++)
  {
    if(min>arr[i])
    min=arr[i];
  }
  cout<<"Maximum value of the array is "<<max<<endl;
  cout<<"Minimum value of the array is "<<min<<endl;

}