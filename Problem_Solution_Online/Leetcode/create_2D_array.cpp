#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> findMatrix(vector<int>& nums) {
    int n = nums.size();
    int m = n / 2;
    
    vector<vector<int>> matrix(m, vector<int>(2));
    
    unordered_set<int> distinctNums(nums.begin(), nums.end());
    vector<int> distinctVec(distinctNums.begin(), distinctNums.end());
    
    for (int i = 0; i < m; i++) {
        matrix[i][0] = distinctVec[2 * i];
        matrix[i][1] = distinctVec[2 * i + 1];
    }
    
    return matrix;
}

int main(){
    vector<int> vec = {1, 1, 2, 2, 3, 3, 4, 5};      // vector < data_type > variable_name = {elements};
    vector<vector<int>> res = findMatrix(vec);      // res variable name type is vector<vector<int>>
    for(auto it = res.begin(); it != res.end(); it++){
        for(auto it1 = it->begin(); it1 != it->end(); it1++){
            cout << *it1 << " ";
        }
        cout << endl;
    }
}