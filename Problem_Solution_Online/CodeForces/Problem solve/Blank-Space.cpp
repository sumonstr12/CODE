#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == 0){
            int b = 0;
            for(int j = i; j < n; j++){
                if(a[j] == 0){
                    b++;
                }else{
                    break;
                }
            }
            ans = max(ans, b);
        }
    }
    cout << ans << endl;
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