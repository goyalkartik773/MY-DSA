#include<iostream>
#include<vector>
using namespace std;
int main(){
    string customers="YYNY";
    int n = customers.size() ;
        vector<int> pre(n , 0);
        vector<int> suff(n , 0);
        vector<int> penality(n + 1, 0);
        if (customers[0] == 'N')
            pre[0] = 1;
        else
            pre[0] = 0;
        for (int i = 1; i < n; i++) {
            if (customers[i] == 'N')
                pre[i] = pre[i - 1] + 1;
            else
                pre[i] = pre[i - 1] + 0;
        }
        if (customers[n - 1] == 'Y')
            suff[n - 1] = 1;
        else
            suff[n - 1] = 0;
        for (int i = n - 2; i >= 0; i--) {
            if (customers[i] == 'Y')
                suff[i] = suff[i + 1] + 1;
            else
                suff[i] = suff[i + 1] + 0;
        }
        for(int ele:pre){
            cout<<ele<<" ";
        }
        cout<<endl;
        for(int ele:suff){
            cout<<ele<<" ";
        }
}