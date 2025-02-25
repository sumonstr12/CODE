#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    string s;
    cin>>s;
    int len = s.length();
    vector<int> ab, ba;
    for(int i = 0; i < len - 1; i++){
        if(s[i] == 'A' && s[i+1] == 'B'){
            ab.push_back(i);
        }
        if(s[i] == 'B' && s[i+1] == 'A'){
            ba.push_back(i);
        }
    }
    for(int i : ab){
        for(int j : ba){
            if(abs(i-j) > 1){
                cout<<"YES"<<endl;
                return;
            }
        }
    }
    cout<<"NO"<<endl;
    
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; // number of test cases
   // cin >> t;
    while (t--)
    {
        solve();
    }
    
}