#include<bits/stdc++.h>
using namespace std;

double factor(int num){
    double fac = 1;
    for (int i = 1; i <= num; i++)
    {
        fac *= i;
    }
    return fac;
}

int main(){
    int N;
    cin>>N;
    double total = 0;
    for (int i = 1; i <= N; i++)
    {
        total += i/factor(i);
    }
    cout<<total<<endl;
}