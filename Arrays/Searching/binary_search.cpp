// Problem : Binary Search (Iterative)
// Approach : Divide search space into halves using mid elements
// Time Complexity : O(log n)
// Space Complexity : O(1)

#include <iostream>
using namespace std;

int binarySearch(int arr[],int n, int target) {
    int st = 0,  end = n-1;

    while(st <= end) {
        int mid = st+(end-st)/2;

        if(arr[mid] < target) {
            st = mid+1;
        }else if(arr[mid] > target) {
            end = mid-1;
        }else {
            return mid;
        }
    }
    return -1;
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12};
    int n = 6;
    int target = 10;

    int result = binarySearch(arr, n, target);

    if(result != -1) {
        cout << "Elements found at index : " << result << endl;
    }else {
        cout << "Elements not found" << endl;
    }
    return 0;
}