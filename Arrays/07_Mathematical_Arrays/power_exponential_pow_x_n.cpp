// Problem : Power (X^N)
// Approach : Instead of multiplying x repeatedly, we use fast exponentiation (binary exponentiation) to compute the power in O(log n) time
// Time Complexity : O(log n)
// Space Complexity : O(1)
// Description : Update result when exponent is odd and square the base while halving the exponent in each step

#include <iostream>
#include <climits>
using namespace std;

double myPow(double x, int n) {
    if(x == 0) return 0.0;
    if(n == 0) return 1.0;

    long long exponent = n;

    if(exponent < 0) {
        x = 1/x;
        exponent = -exponent;
    }

    double result = 1.0;

    while(exponent > 0) {
        if(exponent % 2 == 1) {
            result *= x;
        }
        x *= x;
        exponent /= 2;
    }
    return result;
}

int main() {
    cout << "2^10 = " << myPow(2.0, 10) << endl;
    cout << "2^-2 = " << myPow(2.0, -2) << endl;
    cout << "5^0 = " << myPow(5.0, 0) << endl;
    cout << "3^13 = " << myPow(3.0, 13) << endl;
    cout << "2^-214749876467 = " << myPow(2.0, INT_MIN) << endl;
    
    return 0;
}