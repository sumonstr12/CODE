#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    ll n , m , r , c ;
    cin >> n >> m >> r >> c ;
    if ( n == r && m == c )
    {
        cout << "0" << endl;
        return;
    }
 
    ll res = (n - r)*(2*m - 1) + m - c ;
    cout << res << endl;
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