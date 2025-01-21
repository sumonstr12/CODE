
#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n, d;
    cin >> n >> d;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    bool flag = false;
    int last = 0;
    for(int i = 0;i< n-1 ;i++){
        if(abs(v[i] - v[i+1]) <= d){
            flag = true;
            last = v[i + 1];
            break;
        }
    }
    if(flag){
        cout << last << endl;
    }else{
        cout << "-1" << endl;
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
}