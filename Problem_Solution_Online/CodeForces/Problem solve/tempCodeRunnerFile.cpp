#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    string s1, s2, s;
    cin >> s1 >> s2;
    s[0] = s1[0];
    s1[0] = s2[0];
    s2[0] = s[0];
    cout << s1 << " " << s2 << endl;
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