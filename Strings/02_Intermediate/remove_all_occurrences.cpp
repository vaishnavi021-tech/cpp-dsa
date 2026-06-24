// Problem : Remove All Occurences
// Approach : Repeatedly find and erase the substring until it no longer exist
// Time Complextiy : O(n^2)
// Space Complexity : O(1)

#include <iostream>
#include <string>
using namespace std;

string removeOcc(string s, string part) {
    size_t pos = s.find(part);

    while(pos != string :: npos) {

        s.erase(pos, part.length());
        pos = s.find(part);
    }
    return s;
}

int main() {
    string s = "aabcdeabcfg";
    string part = "abc";

    cout << removeOcc(s, part) << endl;
    return 0;
}