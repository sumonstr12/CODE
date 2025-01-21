
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> a = {{3, 1, 2}, {4, 3, 2}};

    // output should = {{1, 2, 3},{2, 3, 4}}

    // Implementatiion
    for(auto &row: a){
        sort(row.begin(), row.end());
    }


    // print output
    for(const auto row: a){
        for(int i : row){
            cout<< i <<" ";
        }
        cout<<endl;
    }
}