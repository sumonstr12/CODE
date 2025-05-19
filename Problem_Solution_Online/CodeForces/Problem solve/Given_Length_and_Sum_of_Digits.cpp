

// Not solved yet

#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n, s;
    cin >> n >> s;
    if(n == 1 && s == 0 || s > 9){
        cout << "-1 -1" << endl;
        return;
    }
    vector<int> ans;
    int i = 1;
    while (1)
    {

        if(s > 9 && (s- 9)>= (n - i)){
            ans.push_back(9);
        }
    }
    
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; // number of test cases
    // cin >> t;
    while (t--)
    {
        solve();
    }
    
}