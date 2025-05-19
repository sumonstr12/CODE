#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[10000];
    int n;
    cin>>n;
    for (int i = 0; i < n-1; i++)
    {
        cin>>arr[i];
    }
    
    for (int i = 1; i <= n; i++)
    {
        int found = 0;
        for (int j = 0; j < n-1; j++)
        {
            if(i == arr[j]){
                found = 1;
                break;
            }
        }
        if (found == 0)
        {
            cout<<"Missing Number : "<<i<<endl;
        }
        
        
    }
    

    
}