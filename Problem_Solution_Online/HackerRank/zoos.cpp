#include<bits/stdc++.h>
using namespace std;

#define long long ll

void solve(){
    string str;
    cin>>str;
    int len = str.length();
    int z = 0, o = 0;
    for(int i=0; i<len; i++){
        if(str[i] == 'z') z++;
        else break;
    }
    if(z * 2 == len - z){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    
}