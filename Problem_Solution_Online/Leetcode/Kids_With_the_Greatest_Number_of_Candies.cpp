#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int len = candies.size();
        vector<bool> res(len);
        int max = *max_element(candies.begin(), candies.end());
        for (size_t i = 0; i < len; i++)
        {
            if(candies[i] + extraCandies >= max){
                res[i] = true;
            }else{
                res[i] = false;
            }
        }

        return res;
        
    }
    
};

int main() {
    int n;
    cin>>n;
    vector<int> candies(n);
    for(int i = 0; i < n; i++){
        cin>>candies[i];
    }
    int extraCandies;
    cin>>extraCandies;
    Solution sol;
    vector<bool> res = sol.kidsWithCandies(candies, extraCandies);
    for(int i = 0; i < res.size(); i++){
        cout<<res[i]<<" ";
    }
    return 0;
}