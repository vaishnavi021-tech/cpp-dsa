// Problem : Majority Element
// Approach : Maintain candidate and count while traversing array
// Time Complexity : O(n)
// Space Complexity : O(1)
// Description : Find majority element using cancellation technique

#include <iostream>
#include <vector>
using namespace std;

int majorElement(vector<int>nums) {
    int n = nums.size();

    int candidate = 0;
    int votes = 0;

    for(int i=0; i<n; i++) {
        if(votes == 0) {
            candidate = nums[i];
        }

        if(candidate == nums[i]) {
            votes++;
        }else {
            votes--;
        }
    }

    int count = 0;
    for(int val : nums) {
        if(val == candidate) {
            count++;
        }
    }

    if(count > n/2) {
        return candidate;
    }else {
        return -1;
    }
}

int main() {
    vector<int>nums = {8, 8, 8, 8, 9, 2};

    int ans = majorElement(nums);

    if(ans != -1) {
        cout << "Majority Element is : " << ans << endl;
    }else {
        cout << "No Majority Element found" << endl;
    }
    return 0;
}