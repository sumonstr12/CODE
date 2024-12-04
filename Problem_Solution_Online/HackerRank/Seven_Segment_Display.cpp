

#include<bits/stdc++.h>
using namespace std;

#define long long ll

void solve(){
    int total = 0;
    string str;
    cin>>str;
    int n = str.length();
    for(int i=0; i<n; i++){
        if(str[i] == '1'){
            total += 2;
        }else if(str[i] == '7'){
            total += 3;
        }else if(str[i] == '4'){    
            total += 4;
        }else if(str[i] == '2' || str[i] == '3' || str[i] == '5'){
            total += 5;
        }else if(str[i] == '6' || str[i] == '9' || str[i] == '0'){
            total += 6;
        }else if(str[i] == '8'){
            total += 7;
        }
    }
    if(total % 2 == 0){
        for(int i = 0; i< total/2; i++){
            cout<<'1';
        }
        cout<<endl;
    }
    else{
        cout<<'7';
        for(int i = 0; i< (total/2) -1; i++){
            cout<<'1';
        }
        cout<<endl;
        
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