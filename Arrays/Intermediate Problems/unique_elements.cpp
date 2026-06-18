// Problem : Print Unique Elements in Array
// Approach : Compare each element with all others and print if count == 1
// Time Complexity : O(n^2)
// Space Complexity : O(1)

#include <iostream>
using namespace std;

void uniqueValues(int arr[], int size) {
    for(int i=0; i<size; i++) {
        int count = 0;

        for(int j=0; j<size; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }

        if(count == 1) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 1, 2, 6, 3, 4};
    int size = 8;

    cout << "Unique elements : ";
    uniqueValues(arr, size);

    return 0;
}