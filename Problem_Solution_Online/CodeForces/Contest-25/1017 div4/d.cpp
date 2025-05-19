

// wrong answer khaisi


#include <bits/stdc++.h>
using namespace std;

void solve() {
    string p, s;
    cin >> p >> s;
    int m = p.size(), n = s.size();
    
    if (n > 2 * m) {
        cout << "NO\n";
        return;
    }
    
    int i = 0, j = 0;
    while (i < m) {
        if (j >= n) {
            cout << "NO\n";
            return;
        }
        if (j + 1 < n && s[j] == p[i] && s[j + 1] == p[i]) {
            j += 2;
            i++;
        }else if (s[j] == p[i]) {
            j++;
            i++;
        }else {
            cout << "NO\n";
            return;
        }
    }
    if (j == n) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
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