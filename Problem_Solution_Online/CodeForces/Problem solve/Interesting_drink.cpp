#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i< n; i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
        cout<<upper_bound(a.begin(), a.end(), x) - a.begin()<<endl;
    }
    
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