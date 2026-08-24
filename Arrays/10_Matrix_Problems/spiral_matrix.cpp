// Problem : Spiral Matrix 
// Approach : We will use 4 pointers to traverse the matrix in spiral order.
// Time Complexity : O(m*n) where m is the number of rows and n is the number of columns in the matrix.
// Space Complexity : O(m*n) including the space used for the answer vector.

#include <iostream>
#include <vector>
using namespace std;

vector<int>spiralMatrix(vector<vector<int>>& mat) {
    int m = mat.size();
    int n = mat[0].size();

    int sRow = 0,  eRow = m-1;
    int sCol = 0, eCol = n-1;

    vector<int>ans;

    while(sRow <= eRow && sCol <= eCol) {

        // Top
        for(int i=sCol; i<=eCol; i++) {
            ans.push_back(mat[sRow][i]);
        }

        // Right
        for(int j=sRow+1; j<=eRow; j++) {
            ans.push_back(mat[j][eCol]);
        }

        // Bottom
        for(int i=eCol-1; i>=sCol; i--) {
            if(sRow == eRow) {
                break;
            }
            ans.push_back(mat[eRow][i]);
        }

        // Left
        for(int j=eRow-1; j>=sRow+1; j--) {
            if(sCol == eCol) {
                break;
            }
            ans.push_back(mat[j][sCol]);
        }

        sRow++;  eRow--;
        sCol++;  eCol--;
    }
    return ans;
}

int main() {
    vector<vector<int>>mat = {
        {59, 2, 3, 4, 5},
        {7, 8, 9, 10, 11},
        {34, 35, 36, 37, 38}
    };

    vector<int>ans = spiralMatrix(mat);

    for(int i=0; i<ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;
}
