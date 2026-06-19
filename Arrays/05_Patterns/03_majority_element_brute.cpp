// Problem : Majority Element 
// Approach : Check frequency of each element using nested loops and return the element whose count exceeds n/2
// Time Complexity : O(n^2)
// Space Complexity : O(1)

#include <iostream>
#include <vector>
using namespace std;

int majorElement(vector<int>nums) {
    int n = nums.size();

    for(int val : nums) {
        int freq = 0;

        for(int el : nums) {
            if(el == val) {
                freq++;
            }
        }

        if(freq > n/2) {
            return val;
        }
    }
    return -1;
}

int main() {
    vector<int>nums = {3, 2, 3, 3, 3, 3};

    int ans = majorElement(nums);

    if(ans != -1) {
        cout << "Majority Element is : " << ans << endl;
    }else {
        cout << "No Majority Element found" << endl;
    }
    return 0;
}