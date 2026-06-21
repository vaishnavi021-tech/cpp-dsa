// Problem : Container with most water
// Approach : Use two pointers and move the pointer with the shorter height to maximize the water area
// Time Complexity: O(n)
// Space Complexity : O(1)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxArea(vector<int>& height) {
    int n = height.size();
    int maxWater = 0;

    int left = 0,  right = n-1;

    while(left < right) {
        int width = right-left;
        int minHeight = min(height[left], height[right]);

        int currWater = width*minHeight;

        maxWater = max(maxWater, currWater);

        if(height[left] < height[right]) {
            left++;
        }else {
            right--;
        }
    }
    return maxWater;
}

int main() {
    vector<int>height = {1, 1, 1, 3, 5, 8, 2, 7};
    int result = maxArea(height); 

    cout << "Maximum water Container Area : " << result << endl;

    return 0;
}