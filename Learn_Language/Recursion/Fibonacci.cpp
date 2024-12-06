#include<bits/stdc++.h>
using namespace std;

int Fib(int n){
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
    }

    return Fib(n-1) + Fib(n-2);     // Mind it.It's important por Fibonacci.
}

int main(){
    int n;
    cin>>n;
    cout<<n<<"th num Fib is : "<<Fib(n);
}