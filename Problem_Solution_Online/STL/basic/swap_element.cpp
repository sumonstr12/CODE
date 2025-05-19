#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {2, 3, 4 ,5 ,7};
    for (size_t i = 0; i < arr.size() - 1; i+=2)
    {
        swap(arr[i],arr[i+1]);
    }

    for (int num: arr)
    {
        cout<<num<< " ";
    }
    
    
}