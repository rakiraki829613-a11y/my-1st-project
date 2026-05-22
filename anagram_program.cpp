#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<vector<string>> groupanagrams(vector<string>& strs) {

    unordered_map<string, vector<string>> mp;

    for(string word : strs) {

        // copy word
        string temp = word;

        // sort letters
        sort(temp.begin(), temp.end());

        // store in hashmap
        mp[temp].push_back(word);
    }

    vector<vector<string>> ans;

    for(auto x : mp) {

        ans.push_back(x.second);
    }

    return ans;
}

int main() {

    vector<string> strs =
    {"eat","tea","tan","ate","nat","bat"};

    vector<vector<string>> result =
    groupanagrams(strs);

    for(auto group : result) {

        for(auto word : group) {

            cout << word << " ";
        }

        cout << endl;
    }

    return 0;
}