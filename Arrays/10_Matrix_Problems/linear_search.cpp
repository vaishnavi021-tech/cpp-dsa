// Problem : Linear Search in a 2D Matrix
// Approach : Traverse each element of the matrix using nested loops.
     // If the target element is found, return true.
    // Otherwise, return false after checking all elements.
// Time Complexity : O(m*n)
// Space Complexity : O(1)

#include <iostream>
using namespace std;

bool linearSearch(int mat[][3], int rows, int cols, int key) {

    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            
            if(mat[i][j] == key) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int mat[4][3] = {{1,2,3}, {4,5,6}, {7,8,9}, {10,11,12}};

    int rows = 4;
    int cols = 3;
    int key = 11;

    if(linearSearch(mat, rows, cols, key)) {
        cout << "True\n";
    }else {
        cout << "False\n";
    }
    return 0;
}