#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int index = max_element(arr.begin(), arr.end()) - arr.begin();
        return index;
    }
    
};

int main() {

    vector<int> v = {2,3,4,3,1};
    Solution sol;
    cout<<sol.peakIndexInMountainArray(v)<<endl;
    return 0;
}
