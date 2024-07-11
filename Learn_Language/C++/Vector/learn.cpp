#include<bits/stdc++.h>
using namespace std;

int main(){
    // vector in  cpp is dynamic array that can change its size during runtime
    // vector is a sequence container that encapsulates dynamic size arrays

    // Initialization of vector
    // 1. vector<int> v; // creates an empty vector of integers
    // 2. vector<int> v(5); // creates a vector of size 5 with all elements 0
    // 3. vector<int> v(5, 1); // creates a vector of size 5 with all elements 1
    // 4. vector<int> v1 = {1, 2, 3, 4}; // creates a vector of integers with size 4 and elements 1, 2, 3, 4
    // 5. vector<int> v2(v1); // creates a copy of vector v1

    vector<int> vec = {1, 2, 3, 4, 5};      // vector < data_type > variable_name = {elements};
    for(auto it = vec.begin(); it != vec.end(); it++){
        cout << *it << " ";
    }
    
}