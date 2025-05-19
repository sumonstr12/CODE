#include<bits/stdc++.h>
using namespace std;

#define ll long long

bool isPrime(int n){
    for (int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0) return false;
    }
    return true;
}

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    int one = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] == 1) one++;
    }
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i] != 1 && isPrime(a[i]) && one >= 2){
            res++;
            one -= 2;
        }
        if(one < 2) break;
    }
    cout << res << endl;
    

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