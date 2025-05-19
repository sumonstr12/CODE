#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int x, y;
    cin >> x >> y;

    int c = x - y + 1;
    if(c == 0){
        cout<<"YES\n";
    }else if(c > 0 && c % 9 == 0){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
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