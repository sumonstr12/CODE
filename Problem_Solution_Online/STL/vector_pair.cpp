


// jodi doita value ke ekta vector e rakhte chai, tahole pair use kora hoy. pair<int, int> erokom kono pair er jonno use kora hoy.
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 5;
    vector<pair<int, int>> v(n);
    // 1srt way to initialize
    for(int i=0; i<n; i++){
        cin>> v[i].first>> v[i].second;
    }
    // 2nd way to initialize
    for(int i=0; i<n; i++){
        int a, b;
        cin>> a>> b;
        v[i] = make_pair(a, b);
    }


}