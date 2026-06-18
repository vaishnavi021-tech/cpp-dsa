// Problem : Find Minimum and Maximum Element in Array
// Approach : Traverse the array and keep track of min and max values
// Time Complexity : O(n)
// Space Complexity : O(1)

#include <iostream>
#include <climits>
using namespace std;

int main() {
    int nums[] = {5, 15, 22, 1, -15, -24};
    int size = 6;

    int minimum = INT_MAX;
    int maximum = INT_MIN;
    
    for(int i=0; i<size; i++) {
        minimum = min(nums[i], minimum);
        maximum = max(nums[i], maximum); 
    }

    cout << "Smallest = " << minimum << endl;
    cout << "Largest = " << maximum << endl;
    return 0;
}