#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int u = 0, l = 0;
    for(auto c : s){
        if(c == '-'){
            u++;
        }
        else{
            l++;
        }
    }
    if(u < 2 || l == 0){
        cout << "0" << endl;
        return;
    }else{
        ll ans = pow(u, 2);
        
        cout << (ans/4) * l << endl;
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