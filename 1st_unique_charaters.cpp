#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

int firstuniqeelements(string s){
    unordered_map<char,int>mp;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }
    // 1st charaters
    for(int i=0;i<s.size();i++){
        if(mp[s[i]]==1){
            return i;
        }
    }
    return -1;


}
int main(){
    string s="leetcode";
    cout<<firstuniqeelements(s);
    return 0;
}

