
#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    string s;
    cin >> s;
    int a = 0, b = 0;
    for(int i = 0; i < 5; i++){
        if(s[i] == 'A'){
            a++;
        }else{
            b++;
        }
    }
    if(a>b){
        cout<< "A" << endl;
    }else{
        cout << "B" << endl;
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