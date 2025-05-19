#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n, m;
    cin >> n >> m;
    int a[n][2];
    int x = 0, y = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i][0] >> a[i][1];
        x += a[i][0];
        y += a[i][1];
    }

    x = (x - a[0][0]) + m;
    y = (y - a[0][1]) + m;
    cout << 2 * (x + y) << endl;
    
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