#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    string s;
    cin>> s;
    int n = s.length();
    int count = 0;
    string a = "ADVITIYA";
    for(int i = 0; i< n; i++){
        count += (a[i] - s[i] + 26) % 26;
    }
    cout<< count << "\n";
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