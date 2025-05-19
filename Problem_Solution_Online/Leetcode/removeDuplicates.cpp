#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    // Didn't work as expected
    
    int removeDuplicates(vector<int> &nums){
        int len = nums.size();
        vector<int> fin;
        int p = len - 1;
        int temp = 1;
        for (int i = 0; i < len;)
        {   
            if(nums[i] == nums[i + temp]){
                fin[p] = 200;
                fin[i] = nums[i];
                p--;
                temp++;
            }else{
                temp = 1;
                i++;
            }
        }

        for(auto i: fin){
            cout << i << " ";
        }
    }
    
};

int main() {
    vector<int> nums = {1, 1, 2};
    Solution sol;
    sol.removeDuplicates(nums);
    return 0;
}
