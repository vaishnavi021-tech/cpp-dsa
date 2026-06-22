// Problem : Product of array except self
// Approach : Compute prefix and suffix products for each index and combine them to get the final result
// Time Complexity : O(n)
// Space Complexity : O(n) (O(1)auxiliary space)

#include <iostream>
#include <vector>
using namespace std;

vector<int>productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int>ans(n,1);

    for(int i=1; i<n; i++) {      // Prefix Product
        ans[i] = ans[i-1]*nums[i-1];
    }

    int suffix = 1;
    for(int j=n-2; j>=0; j--) {    // Suffix Product
        suffix *= nums[j+1];
        ans[j] *= suffix;          // Multiply prefix with suffix
    }
    return ans;
}

int main() {
    vector<int>nums = {1, 2, 3, 4};

    vector<int>result = productExceptSelf(nums);

    for(int val : result) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}