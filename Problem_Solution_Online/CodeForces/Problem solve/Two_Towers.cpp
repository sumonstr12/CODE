#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n,m;
    cin >> n >> m;
    string s, k;
    cin >> s >> k;
    reverse(k.begin(), k.end());
    s += k;
    int ans = 0;
    for(int i = 0; i < s.size() - 1; i++){
        if(s[i] == s[i+1]){
            ans++;
        }
    }

    if(ans <= 1){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
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