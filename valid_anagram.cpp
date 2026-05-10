#include<iostream>
#include<unordered_map>
using namespace std;

bool isanagram(string s,string t){
    if(s.size()!=t.size()){
        return false;
    }
    unordered_map<char,int>mp;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
        mp[t[i]]--;
    }
    for(auto x:mp){
        if(x.second!=0){
            return false;
        }
    }
    return true;
}
int main(){
    string s="anagram";
    string t="nagaram";
    cout<<isanagram(s,t);
    return 0;
}