// Problem : String Compression
// Approach : Count consecutive characters and write the character followed by its count (if greater than 1) using a write pointer
// Time Complexity : O(n)

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int compression(vector<char>& chars) {
    int n = chars.size();
    int idx = 0;

    for(int i=0; i<n; i++) {
        char ch = chars[i];
        int count = 0;

        while(i < n && chars[i] == ch) {
            count++;
            i++;
        }

        chars[idx++] = ch;

        if(count > 1) {
            string str = to_string(count);

            for(int dig : str) {
                chars[idx++] = dig;
            }
        }
        i--;
    }

    chars.resize(idx);
    return idx;
}

int main() {
    vector<char>chars = {'a', 'a', 'b', 'c', 'c', 'c'};
    int len = compression(chars);

    cout << "Length : " << len << endl;
    cout << "Compressed String : ";

    for(int i=0; i<chars.size(); i++) {
        cout << chars[i];

        if(i != chars.size()-1) {
            cout << ", ";
        }
    }
    cout << endl;
    return 0;
}