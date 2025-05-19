
#include<bits/stdc++.h>
using namespace std;

#define long long ll

void solve(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    bool flag = false;
    for(int i=0; i<n; i++){
        if(str[i] == 'H' && str[i+1] == 'H'){
            flag = true;
            break;
        }
        if(str[i] == '.'){
            str[i] = 'B';
        }
    }
    if(flag){
        cout<<"NO";
    }
    else{
        cout<<"YES\n";
        cout<<str;
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    
}