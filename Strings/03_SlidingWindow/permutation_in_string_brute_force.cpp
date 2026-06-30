// Problem : Permutation in String
// Approach : Use a fixed-size sliding window and compare the frequency of each window with the frequency of s1

#include <iostream>
#include <string>
using namespace std;

bool isFreq(int freq1[], int freq2[]) {
    for(int i=0; i<26; i++) {
        if(freq1[i] != freq2[i]) {
            return false;
        }
    }
    return true;
}


bool checkInclusion(const string& s1, const string& s2) {
    int freq[26] = {0};

    for(int i=0; i<s1.length(); i++) {
        freq[s1[i] - 'a']++;
    }

    int windowSize = s1.length();

    for(int i=0; i<s2.length(); i++) {
        int windFreq[26] = {0};
        int windIdx = i;
        int count = 0;

        while(count < windowSize && windIdx < s2.length()) {
            windFreq[s2[windIdx] - 'a']++;
            windIdx++;
            count++;
        }

        if(isFreq(freq, windFreq)) {
            return true;
        }
    }
    return false;
}

int main() {
    string s1 = "ab";
    string s2 = "eidbaooo";

    if(checkInclusion(s1, s2)) {
        cout << "True\n";
    }else {
        cout << "False\n";
    }

    return 0;
}