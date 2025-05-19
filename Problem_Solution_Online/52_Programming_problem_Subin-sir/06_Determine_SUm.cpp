#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a,c;
    a = n % 10;
    while (n>=0)
    {
        c = n / 10;
        n = n / 10;
    }
    cout<< a+c <<endl;
    
}