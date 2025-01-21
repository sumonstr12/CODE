#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int s, n;
    cin>> s>> n;
    vector<pair<int, int>> v(n);
    for(int i=0; i<n; i++){
        cin>> v[i].first>> v[i].second;
    }
    bool flag = true;
    sort(v.begin(), v.end());
    for(int i = 0; i < n;i++){
        if(s >= v[i].first){
            s += v[i].second;
        }else{
            flag = false;
            break;
        }
    }
    if(flag){
        cout<< "YES";
    }else{
        cout<< "NO";
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    
}