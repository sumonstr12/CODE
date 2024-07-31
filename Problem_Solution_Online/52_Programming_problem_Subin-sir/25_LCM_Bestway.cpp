#include<bits/stdc++.h>
using namespace std;

int GCD(int a,int b){
    while (1)
    {
        int temp = b%a;
        if(temp == 0){
            cout<<a<<endl;
            break;
        }else{
            b = a;
            a = temp;
        }

    }
    
}

int main(){
    int a,b;
    cin>>a>>b;
    if(b>a){
        int c = a;
        a = b;
        b = c;
    }
    int i = 1;
    while (1)
    {
        if ((a*i)%b == 0)
        {
            cout<<a*i<<endl;
            break;
        }else{
            i++;
        }   
    } 
    GCD(b,a);
}
// 