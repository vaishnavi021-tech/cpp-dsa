// Problem : Maximum Column Sum
// Approach : Traverse each column, calculate its sum, and update the maximum column sum.
// Time Complexity : O(m*n)
// Space Complexity : O(1)

#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int getMaxColSum(int mat[][4], int rows, int cols) {
    int maxColSum = INT_MIN;

    for(int i=0; i<cols; i++) {
        int colSum = 0;

        for(int j=0; j<rows; j++) {
            colSum += mat[j][i];
        }

        maxColSum = max(colSum, maxColSum);
    }
    return maxColSum;
}

int main() {
    int mat[4][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    int rows = 4;
    int cols = 4;

    cout << "Maximum Column Sum : " << getMaxColSum(mat, rows, cols) << endl;
    return 0;
}