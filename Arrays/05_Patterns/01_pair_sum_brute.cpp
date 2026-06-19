// Problem : Pair Sum (Must be sorted)
// Approach : Check all possible pairs using two loops (Brute Force)
// Time Complexity :  O(n^2)
// Space Complexity : O(1)

#include <iostream>
#include <vector>
using namespace std;

vector<int>pairSum(vector<int>nums, int target) {
    vector<int>ans;
    int n = nums.size();

    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(nums[i]+nums[j] == target) {
                ans.push_back(i);
                ans.push_back(j);

                return ans;
            }
        }
    }
    return ans;
}

int main() {
    vector<int>nums = {2, 7, 22, 15};
    int target = 24;

    vector<int>ans = pairSum(nums, target);

    if(ans.size() == 2) {
        cout << "Pair found at indices : " << ans[0] << ", " << ans[1] << endl;
    }else {
        cout << "No pair found" << endl;
    }

    return 0;
}