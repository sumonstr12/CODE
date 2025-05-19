#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    vector<int> ones(30, 0);
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < 30; k++) {
            if (a[i] & (1LL << k)) {
                ones[k]++;
            }
        }
    }
    
    long long max_sum = 0;
    for (int i = 0; i < n; i++) {
        long long sum = 0;
        for (int k = 0; k < 30; k++) {
            long long contrib = 0;
            if (a[i] & (1LL << k)) {
                contrib = (1LL << k) * (n - ones[k]);
            } else {
                contrib = (1LL << k) * ones[k];
            }
            sum += contrib;
        }
        max_sum = max(max_sum, sum);
    }
    
    cout << max_sum << "\n";
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