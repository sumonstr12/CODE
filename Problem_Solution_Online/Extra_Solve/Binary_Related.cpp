#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n;
    cin >> n;
    ll res = 0;
    int j = 1;
    for (int i = 1; i <= n; i++) {
        if (n % 2 == 0) {  // When n is even
            if (i % 2 == 0) {
                res += j * 0;
            } else {
                res += j * 1;
            }
        }else {  // When n is odd
                if (i % 2 == 0) {
                     res += j * 1;
                } else {
                    res += j * 0;
                }
            }
                j *= 2;
    }
    
    cout << res << endl;
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