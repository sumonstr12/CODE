#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int new_arr[n],j = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if (i%2==0)
        {
            new_arr[j] = arr[i];    // If we need those number then we used new_arr[] .
            j++;
            cout<<arr[i]<<' ';
        }
        
    }

    
}