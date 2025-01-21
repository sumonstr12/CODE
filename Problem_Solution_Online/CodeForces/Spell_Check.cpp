#include<bits/stdc++.h>
using namespace std;

#define ll long long


bool caseInsensitiveCompare(char a, char b) {
    return tolower(a) < tolower(b);
}

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(n != 5){
        cout<< "NO" << endl;
        return;
    }
    string check = "imrTu";
    sort(s.begin(), s.end(), caseInsensitiveCompare);
    if(s == check){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
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