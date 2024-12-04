#include<bits/stdc++.h>
using namespace std;

#define long long ll

void solve(){
    int l, n, w, h;
    cin>>l>>n;
    for(int i=0; i<n; i++){
        cin>>w>>h;
        if(w < l || h < l){
            cout<<"UPLOAD ANOTHER\n";
        }
        else if(w == h){
            cout<<"ACCEPTED\n";
        }
        else{
            cout<<"CROP IT\n";
        }
    }
    
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    
}