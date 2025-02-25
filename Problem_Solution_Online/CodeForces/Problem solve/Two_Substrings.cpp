
// Problem: Two Substrings
// Contest: Codeforces - Codeforces Round #306 (Div. 2)
// URL: https://codeforces.com/problemset/problem/550/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// Not accepted because of TLE(Time limit exit)


#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    string s;
    cin>>s;
    int len = s.length();
    if(len<4){
        cout<<"NO"<<endl;
        return;
    }
    bool ab = false, ba = false;
    int a = 0;
    for (int i = 0; i < len-1; i++)
    {
        if(s[i] == 'A' && s[i+1] == 'B'){
            
            for (int j = i + 2; j < len-1; j++)
            {
                if(s[j] == 'B' && s[j+1] == 'A'){
                    ab = true;
                    ba = true;
                    break;
                }
            }
        }
        if(s[i] == 'B' && s[i+1] == 'A'){
            
            for (int j = i + 2; j < len-1; j++)
            {
                if(s[j] == 'A' && s[j+1] == 'B'){
                    ba = true;
                    ab = true;
                    break;
                }
            }
        }
    }
    
    if(ab && ba){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; // number of test cases
    //cin >> t;
    while (t--)
    {
        solve();
    }
    
}