#include<bits/stdc++.h>
using namespace std;

#define long long ll

void solve(){
    int l, r, k;
    cin>>l>>r>>k;
    int count = 0;
    for(int i=l; i<=r; i++){
        if(i % k == 0){
            count++;
        }
    }
    cout<<count;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    
}