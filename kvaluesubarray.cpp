
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int subarray(vector<int>&nums,int k){
    unordered_map<int,int> mp;
    mp[0]=1;
    int sum=0;
    int cout=0;
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        if(mp.find(sum-k)!=mp.end()){
            cout+=mp[sum-k];
        }
        mp[sum]++;
    }
    return cout;
}
int main(){
    vector<int>nums={1,1,1};
    int k=2;
    cout<<subarray(nums,k);
    return 0;
}