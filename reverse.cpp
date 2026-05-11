#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void reverseString(vector<char>& s) {

    int left = 0;
    int right = s.size() - 1;

    while(left < right) {

        swap(s[left], s[right]);

        left++;
        right--;
    }
}
int main(){
    vector<char> s= {'h','e','i','i','o'};
    reverseString(s);
    for(char c:s){
        cout<<c;
        }
        return 0;
}