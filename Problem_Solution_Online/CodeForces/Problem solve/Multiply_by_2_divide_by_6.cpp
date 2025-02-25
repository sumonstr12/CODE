#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    ll n;
    cin >> n;
    int count = 0;
    while (n != 1)
    {
        if(n%6 == 0){
            n /= 6;
            count++;
        }
        else{
            n *= 2;
            count++;
        }
        if(n < 1){
            cout << -1 << endl;
            return;
        }
    }
    cout << count << endl;
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