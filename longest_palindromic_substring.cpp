 #include<iostream>
#include <string>
using namespace std;

string longestPalindrome(string s){

    int start = 0;
    int maxlength = 1;

    int n = s.length();

    for(int i = 0; i < n; i++){

        // Odd length palindrome
        int left = i;
        int right = i;

        while(left >= 0 && right < n && s[left] == s[right]){

            if(right - left + 1 > maxlength){
                start = left;
                maxlength = right - left + 1;
            }

            left--;
            right++;
        }

        // Even length palindrome
        left = i;
        right = i + 1;

        while(left >= 0 && right < n && s[left] == s[right]){

            if(right - left + 1 > maxlength){
                start = left;
                maxlength = right - left + 1;
            }

            left--;
            right++;
        }
    }

    return s.substr(start, maxlength);
}

int main(){

    string s;

    cout << "Enter string: ";
    cin >> s;

    cout << "Longest Palindromic Substring: "
         << longestPalindrome(s);

    return 0;
}
