#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    string s;
    getline(cin, s); 
    int n = s.size();
    string ans = string(1, s[0]);
    for (int i = 1; i < n; i++) {
        if (s[i] == ' ' && i+1 < n) ans += s[i+1];
    }
    cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t; // number of test cases
    cin >> t;
    cin.ignore(); 
    
    while (t--) {
        solve();
    }
}
