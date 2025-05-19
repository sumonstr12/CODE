#include<bits/stdc++.h>
using namespace std;

int main(){
    int x1,y1,x2,y2,r;
    cin>>x1>>y1>>r>>x2>>y2;
    int d = pow(x2-x1,2) + pow(y2-y1,2);
    int dis = sqrt(d);
    if(dis<r)
        cout<<"In the circle"<<endl;
    else{
        cout<<"Outer the circle"<<endl;
    }
}