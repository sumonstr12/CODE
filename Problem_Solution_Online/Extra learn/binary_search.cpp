
#include <bits/stdc++.h>
using namespace std;


// mind it vector/array must be sorted......
void binary_search(vector<int> &v, int target){
    int left = 0, right = v.size() - 1;

    while(left<=right){
        int mid = left + (right -  left) / 2;
        if(v[mid] == target){
            cout<<"Found number: "<<v[mid] << " its index : "<< mid <<endl;
            return;
        }else if(v[mid] > target){
            right = mid - 1;
        }else{
            left = mid + 1;
        }
    }
    
}

int main(){
    vector<int> v = { 3,4,5,6,2,1,3};
    int target = 2;
    sort(v.begin(), v.end());

    binary_search(v, target);

    cout<<"2nd way"<<endl;
    int index = binary_search(v.begin(), v.end(), target);
    cout<<"Found number: "<<v[index] << " its index : "<< index <<endl;
}