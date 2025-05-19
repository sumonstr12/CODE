#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<double> nums;
        int a = 0,b = 0;
        for(int i = 0;i<nums1.size() + nums2.size();i++){
            if(nums1[a]<nums2[b]){
                nums.push_back(nums1[a]);
                a++;
            }else if(nums1[a]>nums2[b]){
                nums.push_back(nums2[b]);
                b++;
            }
        }

        if(nums.size() % 2 == 0){
            return (nums[nums.size()/2] + nums[nums.size()/2 - 1]) / 2;
        }else{
            return nums[nums.size()/2];
        }

        
    }


    
};

int main() {
    vector<int> nums1 = {1, 2};
    vector<int> nums2 = {3, 4};
    double res = Solution().findMedianSortedArrays(nums1, nums2);
    cout << res << endl;
    return 0;
}
