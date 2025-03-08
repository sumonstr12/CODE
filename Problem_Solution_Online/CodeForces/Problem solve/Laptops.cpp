#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n;
    cin>>n;
    int a, b;

    vector<pair<int, int>> v;
    for(int i = 0; i<n; i++){
        cin>>a>>b;
        v.push_back({a, b});
    }
    sort(v.begin(), v.end());
    for(int i = 1; i<n; i++){
        if(v[i].second < v[i-1].second){
            cout<<"Happy Alex"<<endl;
            return;
        }
    }
    cout<<"Poor Alex"<<endl;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; // number of test cases
    //cin >> t;
    while (t--)
    {
        solve();
    }
    
}