#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int ans = k + k / (n - 1);
        cout << (ans % n ? ans : ans - 1) << endl;
        
    }
}