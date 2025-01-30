#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n, m;
    cin>> n >> m;
    if(n <= m){
        cout<< "0\n";
    }else{
        cout<< (n - m) * 10000 << "\n";
    }

}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // int t; // number of test cases
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    // }
    solve();
    
}