#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    string s;
        int m = 0, d = 0;
        cin >> s;
        int j = 1;
        for(int i = 0; i < s.length() - 1; i++){
            if(s[i] == s[i + 1]){
                s[i + 1] = j;
                j++;
                m++; 
                d = 1;
            }
        }
        if(d == 1){
            cout << "1" << endl;
        }else
            cout << s.length() - m <<endl;

    
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