// Problem : Reverse Words in String
// Approach : Reverse the entire string, then reverse each word individually while rebuilding the answer
// Time Complexity : O(n)
// Space Complexity : O(n)

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string reverseWords(string& s) {
    int n = s.length();
    string ans = "";

    reverse(s.begin(), s.end());

    for(int i=0; i<n; i++) {
        string word = "";

        while(i<n && s[i] != ' ') {
            word += s[i];
            i++;
        }
        reverse(word.begin(), word.end());

        if(word.length() > 0) {

            if(!ans.empty()) {
                ans += " ";
            }
            ans += word;
        }
    }
    return ans;
}

int main() {
    string s = "the pen ";

    string result = reverseWords(s);

    cout << "Reversed Words : " << result << endl;
    return 0;
}