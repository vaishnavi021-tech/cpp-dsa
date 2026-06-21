// Problem : Container with most water
// Approach : Check all possible pairs of lines, calculate the water stored, and return the maximum (Brute Force)
// Time Complexity : O(n^2)
// Space Complexity : O(1)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxArea(vector<int>& height) {
    int n = height.size();
    int maxWater = 0;

    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            int width = j-i;
            int minHeight = min(height[i], height[j]);

            int currWater = width*minHeight;

            maxWater = max(maxWater, currWater);
        }
    }
    return maxWater;
}

int main() {
    vector<int>height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int result = maxArea(height); 

    cout << "Maximum water Container Area : " << result << endl;

    return 0;
}