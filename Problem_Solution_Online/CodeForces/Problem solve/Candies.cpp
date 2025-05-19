#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    ll n;
    cin>>n;
    int a = 2;
    while(1){
        ll b = pow(2, a) - 1;
        a++;
        if(n % b == 0){
            cout<<n/b<<endl;
            return;
        }
        
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