#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n, k, p;
    cin>> n >> k >> p;
    if( k == 0){
        cout<< "0" << endl;
        return;
    }
    double ans = abs(double(k) / double(p));
    ans = ceil(ans);
    if(ans > n){
        cout << "-1" << endl;
    }
    else{
        cout << ans << endl;
    }
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