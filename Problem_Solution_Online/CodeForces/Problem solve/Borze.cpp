#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    string s;
    cin >> s;
    int n = s.size();
    string ans = "";
    for(int i = 0; i < n; i++){
        if(s[i] == '.'){
            ans += '0';
        }else if(s[i] == '-'){
            if(s[i + 1] == '.'){
                ans += '1';
                i++;
            }else{
                ans += '2';
                i++;
            }
        }
    }
    cout << ans << endl;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    
}