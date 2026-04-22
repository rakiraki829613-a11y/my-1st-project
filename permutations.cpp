#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int permutations(vector<int>& nums){
    int n=nums.size();
    int i=n-2;
    while(i>=0 && nums[i]<nums[i+1]){
        i--;

    }
    if(i>=0){
        int j=n-2;
        while(nums[j]<nums[i]){
            j--;
        }
        swap(nums[i],nums[j]);
    }
    reverse(nums.begin()+i+1,nums.end());
}
int main(){
    vector<int>nums={1,2,3,5,4};
    permutations(nums);
    for(int f:nums){
        cout<<f<<endl;
    }
    return 0;
}