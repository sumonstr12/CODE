#include <bits/stdc++.h> 
using namespace std; 
const int MOD = 1e9 + 7; 

long long product_modulo(int a[], int n) {     
    long long product = 1;     
    for (int i = 0; i < n; i++) {         
        product = (product * a[i]) % MOD;     
    }    
     return product; 
     
} 

int main() {   
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);  
    int n;     
    cin >> n;     
    int a[n];     
    for (int i = 0; i < n; i++) {         
        cin >> a[i];     
    }     
    long long result = product_modulo(a, n);     
    cout << result << endl;     
    return 0; 
}