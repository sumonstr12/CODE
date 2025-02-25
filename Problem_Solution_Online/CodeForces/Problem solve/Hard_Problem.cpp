#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    ll m, a, b, c;
    cin >> m >> a >> b >> c;
    ll t = m * 2;
    t -= min(m, a);
    t -= min(m, b);
    t -= c;

    cout<< (t <= 0 ? m * 2 : m * 2 - t) << endl;
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