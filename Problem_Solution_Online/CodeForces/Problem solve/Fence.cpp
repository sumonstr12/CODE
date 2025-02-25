
// Time Complexity: O(n*k)
// Time limit exceeded

#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int INF = 1e9;

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int flag = INF, index = 0;
    
    for (int i = 0; i < n-k; i++)
    {
        int sum = 0;
        for (int j = i; j < i + k; j++)
        {
            sum += a[j];
        }
        //cout << sum << endl;
        if(sum < flag){
            flag = sum;
            index = i;
        }
        
    }
    cout << index + 1 << endl;
    


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