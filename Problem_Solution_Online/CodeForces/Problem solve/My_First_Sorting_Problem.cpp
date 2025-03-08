#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int a, b;
    cin>>a>>b;
    if(a == b){
        cout<<a <<" "<<b<<endl;
        return;
    }else if(a > b){
        cout<<b<<" "<<a<<endl;
        return;
    }else{
        cout<<a<<" "<<b<<endl;
        return;
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