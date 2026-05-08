#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findlargest(vector<int>&nums,int k){
    sort(nums.begin(),nums.end());
    return nums[nums.size()-k];
}
int main(){
    vector<int> nums={3,2,1,5,6,4};
    int k=2;
    cout<<findlargest(nums,k);
    return 0;
    
}