// Problem : Reverse an Array
// Approach : Use two pointers (start & end) and swap elements
// Time Complexity : O(n)
// Space Complexity : O(1)

#include <iostream>
#include <algorithm>
using namespace std;

void reverseArray(int arr[], int size) {
    int start = 0,  end = size-1;

    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;

    reverseArray(arr, size);

    cout << "Reversed Array : ";
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}