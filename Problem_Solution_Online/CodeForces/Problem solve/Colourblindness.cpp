#include <iostream>
#include <string>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    
    for (int i = 0; i < n; i++) {
        if ((s1[i] == 'R' && s2[i] != 'R') || (s2[i] == 'R' && s1[i] != 'R')) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t; // Read number of test cases
    while (t--) {
        solve();
    }
    return 0;
}