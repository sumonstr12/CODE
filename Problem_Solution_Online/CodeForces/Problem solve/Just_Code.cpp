#include<bits/stdc++.h>
using namespace std;

//write a function declaration
int addTwoDigits(int a, int b){
    return a+b;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);    // Sorting function for...
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<addTwoDigits(20,30)<<endl;
    

    return 0;
}