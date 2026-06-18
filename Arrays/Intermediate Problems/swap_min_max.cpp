// Problems: Swap Minimum and Maximum Element in Array
// Approach : Find min & max indices, then swap their values
// Time Complexity : O(n)
// Space Complexity : O(1)

#include <iostream>
#include <climits>
using namespace std;

void swapMinAndMax(int arr[], int size) {
    int minimum = INT_MAX;
    int maximum = INT_MIN;

    int minIndex = 0;
    int maxIndex = 0;

    for(int i=0; i<size; i++) {
        if(arr[i] < minimum) {
            minimum = arr[i];
            minIndex = i;
        }

        if(arr[i] > maximum) {
            maximum = arr[i];
            maxIndex = i;
        }
    }

    int temp = arr[maxIndex];
    arr[maxIndex] = arr[minIndex];
    arr[minIndex] = temp;

    cout << "Array after swapping the min and max : ";

    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;

    cout << "Original array : ";

    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    swapMinAndMax(arr, size);
    return 0;
}