#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    // Time limit exceeded
    /*
    int n;
    cin>>n;
    string str;
    cin>>str;
    for (int i = 0; i < n; i++)
    {
        if(str[i] == '1' && str[i+1] == '0' || str[i] == '0' && str[i+1] == '1'){
            str.erase(i,2);
            n -= 2;
            i = -1;
        }
    }
    cout<<n;
    */

    int n;
    cin>>n;
    string str;
    cin>>str;
    int count0 = 0, count1 = 0;
    for (int i = 0; i < n; i++)
    {
        if(str[i] == '1'){
            count1++;
        }else{
            count0++;
        }
    }
    if(count0 == count1){
        cout<<0;    
    }else if(count0 > count1){
        cout<<n - count1*2;
    }else{
        cout<<n - count0*2;
    }
    
    
}