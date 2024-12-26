#include<iostream>
#include<vector>
using namespace std;
bool check_partition(vector<int> pre){
  int n = pre.size();
  for(int i=1;i<n;i++){
    pre[i] = pre[i-1] + pre[i];
  }
  for(int i=0;i<n;i++){
    if(pre[i]*2 == pre[n-1])
    return true;
  }
  return false;
}
int main(){
vector<int> arr = {1,2,3,4,5,5};
// let x be the idx jis per array do continous part mai break ho sakta hai
//pre[x] = pre[n-1] - pre[x]
if(check_partition(arr)){
    cout<<"YES! array can be partition into two continous arrays of equal sum";
}
else{
     cout<<"No array cannot be partition into two continous arrays of equal sum";
}

}