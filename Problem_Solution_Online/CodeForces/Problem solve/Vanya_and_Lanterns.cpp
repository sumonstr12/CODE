#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n, l;
    cin>> n>> l;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    double max_diff = 0;
    for(int i = 0; i < n-1; i++){
        max_diff = max(max_diff, (a[i+1] - a[i])/2.0);
    }
    max_diff = max(max_diff, (double)a[0]);
    max_diff = max(max_diff, (double)(l - a[n-1]));
    cout<<fixed<<setprecision(10)<<max_diff<<endl;
    
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; // number of test cases
    // cin >> t;
    while (t--)
    {
        solve();
    }
    
}