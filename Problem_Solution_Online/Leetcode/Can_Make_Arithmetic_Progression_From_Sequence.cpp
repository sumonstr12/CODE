#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int diff = 0;
        for(int i=0; i<arr.size()-1; i++){
            if(i == 0){
                diff = arr[i+1] - arr[i];
            }else{
                if(arr[i+1] - arr[i] != diff){
                    return false;
                }
            }
        }
        return true;
    }
};

int main() {
    vector<int> v = {3,5,1};
    Solution sol;
    cout<<sol.canMakeArithmeticProgression(v)<<endl;
    return 0;
}
