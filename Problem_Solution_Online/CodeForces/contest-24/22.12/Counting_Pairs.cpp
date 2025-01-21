#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    ll n, x, y;
    cin >> n >> x >> y;
    ll a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    ll t = 0;
    for(int i = 0; i< n; i++){
        for (int j = i; j < n; j++)
        {
            if(a[i] + a[j] >= x && a[i] + a[j] <= y && i != j){
                t++;
            }
        }
        
    }
    cout << t << endl;
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