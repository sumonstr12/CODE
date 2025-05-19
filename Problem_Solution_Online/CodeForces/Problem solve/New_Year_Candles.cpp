#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int a, b;
    cin >> a >> b;
    int ans = a;
    int rem = 0;
    while(1){
        a = floor(a / b);
        rem += a%b;
        
        if(rem>=b){
            int n = rem/b;
            rem = rem%b;
            a += n;
        }
        ans += a;
        if(a == 0) break;
    }
    cout << ans << endl;

}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; // number of test cases
    //cin >> t;
    while (t--)
    {
        solve();
    }
    
}