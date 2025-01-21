#include<bits/stdc++.h>
using namespace std;

#define long long ll

void solve(){
    string str;
    cin >> str;
    reverse(str.begin(), str.end());
    int len = str.length();
    for (int i = 0; i < len; i++)
    {
        if(str[i] == 'p'){
            str[i] = 'q';
        }else if(str[i] == 'q'){
            str[i] = 'p';
        }
    }

    cout << str << endl;
    
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