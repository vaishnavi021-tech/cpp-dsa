// Problem : Valid Palindrome
// Approach : Use two pointers from both end, skip non-aplhanumeric characters and compare
// Time Complexity : O(n)
// Space Complexity : O(1)

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isPalindrome(string s) {
    int st = 0;
    int end = s.length()-1;

    while(st < end) {
        if(!isalnum(static_cast<unsigned char>(s[st]))) {
            st++;
            continue;
        }
        if(!isalnum(static_cast<unsigned char>(s[end]))) {
            end--;
            continue;
        }

        if(tolower(static_cast<unsigned char>(s[st])) != tolower(static_cast<unsigned char>(s[end]))) {
            return false;
        }
        st++;
        end--;
    }
    return true;
}

int main() {
    string s = "Ac3?E3C&a";

    if(isPalindrome(s)) {
        cout << "It is a Valid Palindrome\n";
    }else {
        cout << "It is not a Valid Palindrome\n";
    }

    return 0;
}