#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t; // number of test cases
    cin >> t;
    
    while (t--) {
        int n; // size of matrix
        cin >> n;
        
        vector<vector<int>> matrix(n, vector<int>(n));
        
        // Reading the matrix input
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> matrix[i][j];
            }
        }
        
        int operations = 0;
        
        // Traverse the matrix diagonally and apply magic
        for (int size = n; size > 0; --size) {
            for (int i = 0; i <= n - size; ++i) {
                bool needMagic = false;
                
                // Check the main diagonal of the submatrix of size 'size'
                for (int k = 0; k < size; ++k) {
                    if (matrix[i+k][i+k] < 0) {
                        needMagic = true;
                        break;
                    }
                }
                
                // If we found a negative value on the diagonal, we apply magic
                if (needMagic) {
                    ++operations;
                    // Apply magic: increase the diagonal elements of the submatrix
                    for (int k = 0; k < size; ++k) {
                        matrix[i+k][i+k] += 1;
                    }
                }
            }
        }
        
        // Output the number of operations for the current test case
        cout << operations << endl;
    }
    
    return 0;
}
