#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        // your code goes here
        sort(a.begin(), a.end(), greater<int>());
        cout<<a[x-1] -  1<<endl;
    }

}
