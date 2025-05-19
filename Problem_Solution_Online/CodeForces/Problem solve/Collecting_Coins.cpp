#include<bits/stdc++.h>
using namespace std;
 
#define ll long long


 
void solve(){
    int a, b, c, n;
    cin >> a >> b >> c >> n;
    int arr[3] = {a, b, c};
    sort(arr, arr + 3);
    int diff = 2*arr[2] - arr[0] - arr[1];
    if (diff > n) {
        cout << "NO" << endl;
        return;
    }
    int total = a + b + c + n;
    if (total % 3 != 0) {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;

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