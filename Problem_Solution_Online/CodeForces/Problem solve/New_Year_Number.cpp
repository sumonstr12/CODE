#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n;
    cin >> n;
    int x = n/2020;
    int y = n%2020;
    if(x >= y){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
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