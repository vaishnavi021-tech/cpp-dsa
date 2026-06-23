// Problem : Reverse a string using reverse function in C++ STL
// Time Complexity : O(n)
// Space Complexity : O(1)

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s = "hello world";
    
    reverse(s.begin(), s.end());

    cout << "Reversed String : " << s << endl;
    return 0;
}