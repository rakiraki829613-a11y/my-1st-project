#include<iostream>
#include<vector>
using namespace std;

bool jumpgame(vector<int>&nums){
    int maxreach=0;
    for(int i=0;i<nums.size();i++){
        if(i>maxreach){
            return false;
        }
        maxreach=max(maxreach,i+nums[i]);
    }
    return true;
}
int main(){
    vector<int> nums={2,3,1,1,4};
    if(jumpgame(nums)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}