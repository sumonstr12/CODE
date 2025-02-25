#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n;
    cin>> n;
    vector<ll> v(n);
    for(int i=0; i<n; i++){
        cin>> v[i];
    }
    for(int i=0; i<n; i++){
        ll x = sqrt(v[i]);
        if(x*x == v[i]){
            bool flag = true;
            for(ll j=2; j*j<=x; j++){
                if(x%j == 0){
                    flag = false;
                    break;
                }
            }
            if(flag && x != 1){
                cout<< "YES\n";
            }else{
                cout<< "NO\n";
            }
        }else{
            cout<< "NO\n";
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    
}