// Problem : Majority Element
// Approach : Sort the array
// Time Complexity : O(nlogn)
// Space Complexity : O(1)
// Description : Sorting groups same elements together, making it easy to count frequency 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int majorElement(vector<int>nums) {
    int n = nums.size();

    sort(nums.begin(), nums.end());

    int freq = 1, ans = nums[0];

    for(int i=1; i<n; i++) {
        if(nums[i] == nums[i-1]) {
            freq++;
        }else {
            freq = 1;
            ans = nums[i];
        }

        if(freq > n/2) {
            return ans;
        }
    }
    return -1;
}

int main() {
    vector<int>nums = {5, 3, 3, 5, 5, 5};

    int ans = majorElement(nums);

    if(ans != -1) {
        cout << "Majority Element : " << ans << endl;
    }else {
        cout << "No Majority Element found" << endl;
    }
    return 0;
}