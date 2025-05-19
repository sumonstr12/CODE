#include<bits/stdc++.h>
using namespace std;

#define long long ll

void solve(){
    int n, q;
    cin >> n >> q;
    map<string, string> m;
    string s;
    cin.ignore();
    for(int i = 0; i < n; i++){
        getline(cin, s);
        stringstream ss(s);
        string tag = "", attr = "", val = "";
        char ch;
        ss >> ch >> tag;
        tag.pop_back();
        while(ss >> attr >> ch >> val){
            val.pop_back();
            val = val.substr(1);
            m[tag + "~" + attr] = val;
        }
    }
    for(int i = 0; i < q; i++){
        getline(cin, s);
        if(m.find(s) != m.end()){
            cout << m[s] << endl;
        }else{
            cout << "Not Found!" << endl;
        }
    }
    
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; // number of test cases
    cin >> t;
    solve();
    
}