#include<iostream>
#include<vector>
#include<string>
using namespace std;
string longestcommenprefix(vector<string>&strs){
    string ans=strs[0];
    for(int i=0;i<strs.size();i++){
        while(strs[i].find(ans)!=0){
            ans.pop_back();
        }
    }
    return ans;
}
int main(){
    vector<string> strs={"flotyuio","flertyui","fiower"};
    longestcommenprefix(strs);
    return 0;
}


