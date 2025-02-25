#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n, t;
    cin >> n >> t;
    vector<int> a(n);
    for (int i = 0; i < n-1; i++)
    {
        cin >> a[i];
    }
    int i = 0;
    while (i < n-1)
    {
        i += a[i];
        if(i == t-1){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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