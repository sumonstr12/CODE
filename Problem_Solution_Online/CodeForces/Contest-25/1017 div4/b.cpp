#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n, m, l, r;
    cin >> n >> m >> l >> r;
    
    int a = -l, b = r;
    int left = m;
    if (left >  a)         {
        left = a;
    }
    int right = m - m / 2;      
    
    cout << -left << " " << m - left << "\n";
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