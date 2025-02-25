
#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int a, b;
    cin >> a >> b;
    int min = a < b ? a : b;
    int max = a > b ? a : b;
    cout << min << " " << (max - min) / 2 << endl;
    
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; // number of test cases
    solve();
    
}