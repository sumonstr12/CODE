#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum = 0;
    int t = n;
    while (n>0)
    {
        int a = n%10;
        sum += (a*a*a);
        n = n/10;
    }
    if (sum == t)
    {
        cout<<"Armstrong Number"<<endl;
    }else{
        cout<<"no"<<endl;
    }
    
    
}