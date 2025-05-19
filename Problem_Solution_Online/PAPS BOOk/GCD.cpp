#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if (b == 0) return a;
    return gcd(b, a % b);
}

int lcm(int a, int b){
    return a / gcd(a,b) * b;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int a,b;
    cin >> a >> b;
    cout<< __gcd(a,b) << endl;  // built-in function
    cout << gcd(a,b) << endl;
    cout << lcm(a,b) << endl;
}