

// Accepted

#include<bits/stdc++.h>
using namespace std;

#define long long ll

void solve(){
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int d = 0;
    int total = a + b + c;
    int div = n / total;
    d = div * 3;
    int rem = n % total;
    if(rem <= a  && rem > 0){
        d += 1;
    }
    if(rem > a && rem <= a + b && rem > 0){
        d += 2;
    }
    if(rem > a + b && rem <= total && rem > 0){
        d += 3;
    }
    cout << d << endl;
    
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