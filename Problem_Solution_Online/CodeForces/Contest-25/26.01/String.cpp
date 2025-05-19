#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    string s;
    cin>> s;
    int len = s.length();
    int ans = 0;
    for (int i = 0; i < len; i++)
    {
        if(s[i] == '1'){
            ans++;
        }
    }
    cout<< ans<< endl;
    
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