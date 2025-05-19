#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += a[i];
    }
    ll min_sum = sum, index = 0;
    for (int i = 1; i <= n-k; i++)
    {
        sum = sum - a[i-1] + a[i+k-1];
        if(sum < min_sum){
            min_sum = sum;
            index = i;
        }
    }
    cout << index + 1 << endl;
    

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