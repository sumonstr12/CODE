#include<bits/stdc++.h>
using namespace std;

#define long long ll

void solve(){
    string str;
    cin>>str;
    string rev = str;
    reverse(rev.begin(), rev.end());
    if (str == rev) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    
}