// Problem : Product of array except self
// Approach : For each element, multiply all other elements except itself and store the result (Brute Force)
// Time Complexity : O(n^2)
// Space Complexity : O(n)

#include <iostream>
#include <vector>
using namespace std;

vector<int>productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int>ans(n,1);

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(nums[i] != nums[j]) {
                ans[i] *= nums[j];
            }
        }
    }
    return ans;
}

int main() {
    vector<int>nums = {1, 2, 3, 4, 5};

    vector<int>result = productExceptSelf(nums);

    for(int val : result) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}