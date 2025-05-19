#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int m, k;
    cin>> m >> k;
    string str;
    cin>> str;
    int n = str.length();
    int ss = 0, pp = 0;
    for(int i = 0; i< n; i++){
        if(str[i] == 'S'){
            ss++;
        }else{
            pp++;
        }
    }
    if(ss >= k){
        cout<< m << "\n";
    }else{
        cout<< k + ss << "\n";
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