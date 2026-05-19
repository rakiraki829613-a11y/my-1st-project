#include <iostream>
#include <unordered_set>
using namespace std;

int longestsubstring(string s) {

    unordered_set<char> st;

    int left = 0;
    int maxlength = 0;

    for(int right = 0; right < s.size(); right++) {

        // remove duplicates
        while(st.find(s[right]) != st.end()) {

            st.erase(s[left]);
            left++;
        }

        // insert current character
        st.insert(s[right]);

        // update maximum length
        maxlength =
        max(maxlength, right - left + 1);
    }

    return maxlength;
}

int main() {

    string s = "abcabcbb";

    cout << longestsubstring(s);

    return 0;
}