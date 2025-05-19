#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1,n2,arr1[1000],arr2[1000];
    cin>>n1;
    for (int i = 0; i < n1; i++)
    {
        cin>>arr1[i];
    }
    cin>>n2;
    for (int i = 0; i < n2; i++)
    {
        cin>>arr2[i];
    }
    int new_arr[2000];
    int len = n1  +  n2,p = 0,q = 0;
    for (int i = 0; i < len; i++)
    {
        if(arr1[p]<arr2[q]){
            new_arr[i] = arr1[p];
            p++;
        }
        else{
            new_arr[i] = arr2[q];
            q++;
        }
        
    }
    for (int i = 0; i < len; i++)
    {
        cout<<new_arr[i]<<' ';
    }
    

    
}