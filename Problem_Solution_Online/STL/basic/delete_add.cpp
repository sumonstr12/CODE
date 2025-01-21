#include <bits/stdc++.h>
using namespace std;

int main(){

    // dirct man declaration er khetre index size deoya jabe na..mind it
    vector<int> v = {3,4,5,6,3,2};
    v.push_back(12);
    for(auto i: v){
        cout<<i << " ";
    }
    cout<<endl;

    // delete first value
    v.erase(v.begin());
    for(auto i: v){
        cout<<i << " ";
    }
    cout<<endl;

    // delete 3rd value
    v.erase(v.begin() + 2);
    // jekono index e jaite chaile must kono pointer k point e int add kore korte hbe
    // uporer liner moto kore
    for(auto i: v){
        cout<<i << " ";
    }
    cout<<endl;

    // erase last value
    v.erase(v.end());
    for(auto i: v){
        cout<<i << " ";
    }
    cout<<endl;
}