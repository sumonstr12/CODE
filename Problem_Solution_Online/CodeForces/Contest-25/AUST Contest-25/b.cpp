#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n;
    cin >> n;
        
    if (n == 1) {
        cout << "1\n";
    } else if (n == 2) {
        cout << "1 2\n";
    }else {
        vector<int> a(n);
        int left = 1, right = n;
    
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                a[i] = right;
                right--;
            } else {
                a[i] = left;
                left++;
            }
        }

        for (int num : a) {
            cout << num << " ";
        }
        cout << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}