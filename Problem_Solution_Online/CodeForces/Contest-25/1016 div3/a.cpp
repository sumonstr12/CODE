#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int a;
    cin>>a;
    if (a%2 == 0){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
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