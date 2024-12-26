#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int bestClosingTime(string customers) {
        int n = customers.size();
        vector<int> pre(n , 0);
        vector<int> suff(n , 0);
        vector<int> penality(n + 1, 0);
        pre[0] =  (customers[0] == 'N') ? 1 : 0;
        for (int i = 1; i < n; i++) {
            if (customers[i] == 'N')
                pre[i] = pre[i - 1] + 1;
            else
                pre[i] = pre[i - 1] + 0;
        }
        suff[n-1] = (customers[n - 1] == 'Y') ? 1 : 0;
        for (int i = n - 2; i >= 0; i--) {
            if (customers[i] == 'Y')
                suff[i] = suff[i + 1] + 1;
            else
                suff[i] = suff[i + 1] + 0;
        }
        for(int i=0;i<=n;i++){
            if(i==0)
            penality[i] = suff[i];
            else if(i==n)
            penality[i] = pre[i-1];
            else
            penality[i] = pre[i-1] + suff[i];
        }
        int min=INT_MAX;
        int idx=-1;
        for(int i=0;i<=n;i++){
            if(min>penality[i])
            min = penality[i];
        }
        for(int i=0;i<=n;i++){
            if(penality[i]==min)
            {
                idx = i;
                break;
            }
        }
        return idx;
    }
};
int main(){
    
}