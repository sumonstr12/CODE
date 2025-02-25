#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n, m;
    cin>>n>>m;
    ll ans = 0;
    for(int i = 1; i <= m; i++){
        ans += i;
    }
    int i = 2;
    for(int j = 1; j < n; j++){
        ans += (m*i);
        i++;
    }
    cout<<ans<<endl;
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