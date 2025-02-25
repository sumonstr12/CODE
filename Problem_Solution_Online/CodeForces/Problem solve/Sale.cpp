
#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(), arr.end());
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        if(arr[i] < 0){
            sum += arr[i];
        }
    }
    cout<<abs(sum)<<endl;
    
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1; // number of test cases
    //cin >> t;
    while (t--)
    {
        solve();
    }
    
}