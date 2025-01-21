

#include <bits/stdc++.h>
using namespace std;

int main(){
    
    // initialization
    vector<vector<int>> v;

    vector<int> a1 = {1,2,3,4};
    vector<int> a2 = {3,5,3,4,2};

    // add vector a1 and a2 into 2d vector---
    // v 2d vector e 1d er a1 and a2 ke insert korsi
    v.push_back(a1);
    v.push_back(a2);

    // Print the vector-
    for(auto u: v){
        for(auto p: u){
            cout<<p<< " ";
        }
        cout<<endl;
        /*
        first u te a1 and a2 store hbe,
        2nd iteration e p diye print korbe
        */
    }
}