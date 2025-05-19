#include<bits/stdc++.h>
using namespace std;

#define ll long long

bool prime(ll n){
    if(n <= 1) return false;
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

void solve(){
    ll x, n;
    cin>>x >> n;
    cout << (n == 1 ? (prime(x) ? "YES" : "NO") : ((x == 1 && n == 2) ? "YES" : "NO")) << endl;

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