

// Not Accepted
#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n, t;
    cin >> n >> t;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i] <= t){
            ans++;
            t -= a[i];
        }
        else
        {
            continue;
        }
    }
    cout << ans << endl;
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