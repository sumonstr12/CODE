#include <bits/stdc++.h>
using namespace std;

int findPeak(const vector<int>& v) {
    int left = 0, right = v.size() - 1;
    while (left < right) {
        int mid = left + (left + right) / 2;
        if (v[mid] < v[mid + 1]) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    return left;
}

int main(){
    vector<int> v = {2,3,4,3,1};
    int peak = findPeak(v);
    cout<<peak<<endl;
}