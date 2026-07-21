// Problem : Maximum Row Sum
// Approach : Traverse each row, calculate its sum, and update the maximum row sum.
// Time Complexity : O(m*n)
// Space Complexity : O(1)

#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int getMaxSum(int mat[][3], int rows, int cols) {
    int maxRowSum = INT_MIN;

    for(int i=0; i<rows; i++) {
        int rowSum = 0;

        for(int j=0; j<cols; j++) {
            rowSum += mat[i][j];
        }
        maxRowSum = max(maxRowSum, rowSum);
    }
    return maxRowSum;
}

int main() {
    int mat[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int rows = 3;
    int cols = 3;

    cout << "Maximum Row Sum : " << getMaxSum(mat, rows, cols) << endl;
    return 0;
}