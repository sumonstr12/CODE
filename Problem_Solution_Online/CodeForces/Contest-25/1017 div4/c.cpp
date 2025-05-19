#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<vector<int>> g(n + 1, vector<int>(n + 1));
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> g[i][j];
        }
    }
    
    vector<int> p(2 * n + 1);
    for (int k = 2; k <= 2 * n; k++) {
        int i = max(1, k - n);
        int j = k - i;
        p[k] = g[i][j];
    }
    
    vector<bool> seen(2 * n + 1, false);
    for (int k = 2; k <= 2 * n; k++) {
        seen[p[k]] = true;
    }
    int p1;
    for (int i = 1; i <= 2 * n; i++) {
        if (!seen[i]) {
            p1 = i;
            break;
        }
    }
    
    cout << p1;
    for (int k = 2; k <= 2 * n; k++) {
        cout << " " << p[k];
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}