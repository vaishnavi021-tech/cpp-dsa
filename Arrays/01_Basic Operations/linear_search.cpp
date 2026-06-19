// Problem : Linear Search in Array
// Approach : Traverse array and compare each element with target
// Time Complexity : O(n)
// Space Complexity : O(1)

#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for(int i=0; i<size; i++) {
        if(arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = 7;
    int target = 8;

    int result = linearSearch(arr, size, target);
    
    if(result != -1) {
        cout << "Target found at index : " << result << endl;
    }else {
        cout << "Target not found" << endl;
    }
    return 0;
}