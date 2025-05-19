#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n, a, b, c;
    cin>>n>>a>>b>>c;
    int ans = 0;
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= n; j++){
            int k = n - (a*i + b*j);
            if(k >= 0 && k%c == 0){
                ans = max(ans, i+j+k/c);
            }
        }
    }
    cout<<ans<<endl;
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