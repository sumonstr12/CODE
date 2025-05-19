
#include<bits/stdc++.h>
using namespace std;

#define long long ll

void solve(){
    string str;
    cin>>str;
    int len = str.length();
    if(str[2] == 'A' || str[2] == 'E' || str[2] == 'I' || str[2] == 'O' || str[2] == 'U' || str[2] == 'Y'){
        cout << "\"invalid\"";
        return;
    }else{
        if((str[0] + str[1]) % 2 == 0 && (str[3] + str[4]) % 2 == 0 && (str[4] + str[5]) % 2 == 0 && (str[7] + str[8]) % 2 == 0){
            cout<<"valid";
        }
        else{
            cout << "\"invalid\"";  // way to print double quotes in c++
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    
}

/*

cout<< "\"text\""; // way to print double quotes in c++
complexity: O(1)

*/