#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n,k, sum = 0;
    cin>> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>> a[i];
        sum += a[i];
    }
    if(sum <= k){
        cout<< "1\n";
    }else{
        if(sum == (k * (sum / k))){
            cout<< sum / k << "\n";
        }else{
            cout<< sum / k + 1 << "\n";
        }
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