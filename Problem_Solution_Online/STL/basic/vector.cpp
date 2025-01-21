#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    
    // iterete with different ways
    // 1. using index
    for(int i=0; i<n; i++){
        cout << v[i] << " ";
    }
    cout << endl;
    
    // 2. using iterator
    for(auto x: v){
        cout << x << " ";
    }
    cout << endl;

    // 3. using iterator
    vector<int>::iterator it;
    for(it=v.begin(); it!=v.end(); it++){
        cout << *it << " ";
    }

}