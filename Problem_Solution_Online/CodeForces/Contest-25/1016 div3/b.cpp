
#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    string s;
    cin>>s;
    int a = 0, b = 0;
    for(auto c : s){
        if(c == '0'){
            a++;
        }else{
            b = max(b, a);
        }
    }
    cout<<s.size() - b  - 1<< endl;
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