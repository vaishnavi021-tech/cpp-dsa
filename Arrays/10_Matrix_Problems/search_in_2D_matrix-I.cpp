// Problem : Search in 2D matrix-I (Sorted Matrix)
// Approach : Search in 2D matrix first, find the row and then search in that row
// Time Complexity : O(log n)
// Space Complexity : O(1)

#include <iostream>
#include <vector>
using namespace std;

// Step - 2: Search in the row to find the target element
bool searchInRow(vector<vector<int>>& mat, int row, int target) {
    int n = mat[row].size();

    int start = 0;
    int end = n-1;

    while(start <= end) {
        int mid = start + (end - start) / 2;

        if(target == mat[row][mid]) {
            return true;
        }else if(target < mat[row][mid]) {
            end = mid - 1;
        }else {
            start = mid + 1;
        }
    }
    return false;
}

// Step - 1: Search in 2D matrix to find the target row
bool searchInMat(vector<vector<int>>& mat, int target) {
    int m = mat.size();

    int startRow = 0;
    int endRow = m - 1;

    while (startRow <= endRow) {
        int midRow = startRow + (endRow - startRow) / 2;
        int rowSize = mat[midRow].size();

        if (target >= mat[midRow][0] && target <= mat[midRow][rowSize - 1]) {
            return searchInRow(mat, midRow, target);
        } else if (target > mat[midRow][rowSize - 1]) {
            startRow = midRow + 1;
        } else {
            endRow = midRow - 1;
        }
    }
    return false;
}

int main() {
    vector<vector<int>>mat = {
        {1,2,3,4,5},
        {8,9,11,12},
        {16,17,18,19}
    };

    int target = 19;

    if(searchInMat(mat, target)) {
        cout << "Target Found!\n";
    }else {
        cout << "Target Not Found!\n";
    }
    return 0;
}