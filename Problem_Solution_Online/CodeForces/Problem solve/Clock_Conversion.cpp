#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    string s;
    cin>>s;
    int h1 = (s[0] - '0') * 10 + (s[1] - '0');
    if(h1 < 12 && h1 >= 0){
        if(h1 == 0){
            cout<<"12"<<s[2]<< s[3] << s[4] << " AM\n";
        }else{
            if(h1 < 10){
                cout<<"0"<<h1<<s[2]<< s[3] << s[4] << " AM\n";
            }else{
                cout<<h1<<s[2]<< s[3] << s[4] << " AM\n";
            }
        }
    }else{
        if(h1 == 12){
            cout<<h1<<s[2]<< s[3] << s[4] << " PM\n";
        }else{
            h1 -= 12;
            if(h1 < 10){
                cout<<"0"<<h1<<s[2]<< s[3] << s[4] << " PM\n";
            }else{
                cout<<h1<<s[2]<< s[3] << s[4] << " PM\n";
            }
        }
    }
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