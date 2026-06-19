// Problem : Find Intersection of Two Arrays
// Approach : Brute Force (Nested loops)
// Time Complexity : O(n^2 + n*m)
// Space Complexity :  O(1)
// Description : Compare elements of both arrays and print common elements without duplicates

#include <iostream>
using namespace std;

void intersectionOfTwoArr(int arr1[], int arr2[], int size1, int size2) {
    for(int i=0; i<size1; i++) {

        bool alreadyPrinted = false;

        for(int k=0; k<i; k++) {
            if(arr1[i] == arr1[k]) {
                alreadyPrinted = true;
                break;
            }
        }

        if(alreadyPrinted) 
        continue;

        for(int j=0; j<size2; j++) {
            if(arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                break;
            }
        }
    }
    cout << endl;
}

int main() {
    int arr1[] = {1, 3, 1, 7, 3};
    int arr2[] = {1, 3, 4, 3};

    int size1 = 5;
    int size2 = 4;

    cout << "Intersection of two arrays(no duplicates) : ";

    intersectionOfTwoArr(arr1, arr2, size1, size2);

    return 0;
}