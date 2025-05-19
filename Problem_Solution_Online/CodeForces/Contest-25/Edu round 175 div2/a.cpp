#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n;
    cin >> n;
    int count = (n / 15) * 3;

    for (int i = (n / 15) * 15; i <= n; i++) {
        if (i % 3 == i % 5) {
            count++;
        }
    }
    cout<<count<<endl;
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