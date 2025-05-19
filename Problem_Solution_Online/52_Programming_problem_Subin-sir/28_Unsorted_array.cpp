#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    bool res = true;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>arr[i+1]){
            res = false;
            break;
        }

    }
    if(res){
        cout<<"Sorted"<<endl;
    }else
        cout<<"Unsorted"<<endl;
    
    
}