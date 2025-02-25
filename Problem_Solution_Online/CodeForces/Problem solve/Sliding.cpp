
// Problem: Sliding Cost
// Contest: Codeforces - Codeforces Round #726 (Div. 2)
// time limit exceeded on test 2

#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n, m, r, c;
    cin >> n >> m >> r >> c;
    ll total = 0;
    int r0 = r, c0 = c;
    for(int i = r; i <= n; i++){
        if(i == r){
            for(int j = c + 1; j <= m; j++){
                total += abs(j - c0); 
                c0 = j;
                r0 = i;
            }
        }else{
            for(int j = 1; j <= m; j++){
                total += abs(j - c0) + abs(i - r0);
                c0 = j;
                r0 = i;
            }
        }
    }
    cout << total << endl;
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