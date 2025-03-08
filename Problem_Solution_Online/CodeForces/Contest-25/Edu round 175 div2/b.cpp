#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    ll n, x, k;
    cin >> n >> x >> k;
    string s;
    cin >> s;

    vector<ll> prefix(n + 1, 0);
    for (ll i = 1; i <= n; i++) {
        prefix[i] = prefix[i - 1] + (s[i - 1] == 'L' ? -1 : 1);
    }

    ll first_reset = -1;
    for (ll i = 1; i <= n; i++) {
        if (x + prefix[i] == 0) {
            first_reset = i;
            break;
        }
    }

    
    if (first_reset == -1 || first_reset > k) {
        cout << 0 << "\n";
        return;
    }

    ll resets = 1; 
    ll cycle_time = -1;

    
    for (ll j = 1; j <= n; j++) {
        if (prefix[j] == 0) {
            cycle_time = j;
            break;
        }
    }

    if (cycle_time != -1) {
        resets += (k - first_reset) / cycle_time; 
    }

    cout << resets << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; // number of test cases
    cin >> t;
    while (t--) {
        solve();
    }
}
