#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n, m;
    cin>>n >> m;
    vector<int> a(m);
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    
    ll ans = a[0] - 1;
    for (int i = 1; i < m; i++)
    {
        if(a[i] >= a[i-1]){
            ans += a[i] - a[i-1];
        }
        else{
            ans += n - a[i-1] + a[i];
        }
    }
    cout<<ans<<endl;

    
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