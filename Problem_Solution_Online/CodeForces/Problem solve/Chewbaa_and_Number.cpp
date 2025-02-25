#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    ll n;
    cin >> n;
    vector<string> a;
    while(n){
        if(n%10 > 4){
            if(n%10 == 9 && n/10 == 0){
                a.push_back("9");
            }
            else
            {
                a.push_back(to_string(9-n%10));
            }
        }
        else
        {
            a.push_back(to_string(n%10));
        }
        n /= 10;
    }
    reverse(a.begin(), a.end());
    for(const auto& num : a){
        cout << num;
    }
    cout << endl;
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