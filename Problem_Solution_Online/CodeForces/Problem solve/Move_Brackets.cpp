#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
    bool flag = false;
    for(int i = 0; i < n; i++){
        if(s[i] == '('){
            for (int j = i+ 1; j < n; j++)
            {
                if(s[j] == ')'){
                    s[i] = '0';
                    s[j] = '0';
                    break;
                }
            }
            
        }
        else{
            continue;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(s[i] == '('){
            count++;
        }
    }
    
    cout << count << endl;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; // number of test casesa
    cin >> t;
    while (t--)
    {
        solve();
    }
    
}