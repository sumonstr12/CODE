#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i = 0; i < n-2; i++){
        cin>>a[i];
    }
    bool ans = true;
    if(n == 1 || n == 2){
        cout<<"YES"<<endl;
        return;
    }
    for(int i = 1; i < n-4; i++){
        if(a[i] == 1 && a[i+1] == 0 && a[i+2] == 1){
            ans = false;
            break;
        }

    }
    if(ans){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; // number of test cases
    cin >> t;
    while (t--)
    {
        solve();
    }
    
}