#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    if (m * a <= b)
    {
        cout << n * a << endl;
    }
    else
    {
        cout << (n / m) * b + min((n % m) * a, b) << endl;
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; // number of test cases
    // cin >> t;
    while (t--)
    {
        solve();
    }
    
}