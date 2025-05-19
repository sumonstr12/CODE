#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n, a = 0;
    cin >> n;
    string s, r_s;
    cin >> s;
    r_s = s;
    reverse(r_s.begin(), r_s.end());
    for (int i = 0; i < n/2; i++)
    {
        if(s[i] != r_s[i]){
            a += 2;
        }else{
            break;
        }
    }
    cout << n - a << endl;
    
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