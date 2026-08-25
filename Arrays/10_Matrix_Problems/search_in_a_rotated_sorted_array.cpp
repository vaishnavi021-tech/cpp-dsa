// Problem : Search in a Rotated Sorted Array
// Approach : Binary Search 
// Time Complexity : O(log n)
// Space Complexity : O(1)

#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& arr, int target) {
    int n = arr.size();

    int st = 0;
    int end = n - 1;

    while(st <= end) {
        int mid = st + (end - st) / 2;

        if(arr[mid] == target) {
            return mid;
        }

        //Left Sorted
        if(arr[st] <= arr[mid]) {
            if(target >= arr[st] && target < arr[mid]) {
                end = mid - 1;
            }else {
                st = mid + 1;
            }

        }else {  // Right Sorted
            if(target > arr[mid] && target <= arr[end]) {
                st = mid + 1;
            }else {
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main() {
    vector<int>arr = {3, 4, 5, 6, 7, 0, 1, 2};
    int target = 7;

    cout << "Target index in a rotated sorted array : " << search(arr, target) << endl;
    return 0;
}
