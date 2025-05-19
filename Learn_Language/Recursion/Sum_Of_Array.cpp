#include<bits/stdc++.h>
using namespace std;

int sum(int arr[],int n){
    if(n == 0){
        return 0;
    }else{
        return arr[n-1] + sum(arr,n-1);
    }
}

int main(){
    int arr[100];
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Sum : "<<sum(arr,n);
    
}