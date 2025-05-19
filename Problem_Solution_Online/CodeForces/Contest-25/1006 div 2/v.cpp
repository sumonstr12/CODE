// not solved


#include<bits/stdc++.h>
using namespace std;

#define ll long long

bool isSqrt(ll n){
    ll x = sqrt(n);
    return x*x == n;
}

void solve(){
    int n;
    cin >> n;
    ll sum = n*(n+1)/2;
    if(isSqrt(sum)){
        cout<<"-1"<<endl;
        return;
    }
    int x = 0;
    int s = 0;
    for(int i = 1; i <= n; i++){
        if(s != 0){
            cout<<s<<" ";
            s = 0;
        }
        if(!isSqrt(x)){
            if(s != 0){
                cout<<s<<" ";
                s = 0;
            }else{
                cout<<i<<" ";
                x += i;
            }
        }else{
            cout<<i+1<<" ";
            s = i;
        }
    }
    cout<<endl;
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