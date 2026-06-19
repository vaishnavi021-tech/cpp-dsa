// Problem : Pair Sum (Must be sorted)
// Approach : Use two Pointers (start and end). Move pointers based on sum comparison to reach target efficiently.
// Time Complexity :  O(n)
// Space Complexity : O(1)

#include <iostream>
#include <vector>
using namespace std;

vector<int>pairSum(vector<int>nums, int target) {
    vector<int>ans;
    int n = nums.size();

    int st=0, end=n-1;

    while(st < end) {
        int pairSum = nums[st]+nums[end];
        if(pairSum > target) {
            end--;
        }else if(pairSum < target) {
            st++;
        }else {
            ans.push_back(st);
            ans.push_back(end);
            return ans;
        }
    }
    return ans;
}

int main() {
    vector<int>nums = {2, 7, 11, 15};
    int target = 26;

    vector<int>ans = pairSum(nums, target);

    if(ans.size() == 2) {
        cout << "Pair found at indices : " << ans[0] << ", " << ans[1] << endl;
    }else {
        cout << "No pair found" << endl;
    }
    return 0;
}