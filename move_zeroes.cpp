#include<iostream>
#include<vector>
using namespace std;

int movezeroes(vector<int>& nums){
    int j=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]!=0){
            swap(nums[j],nums[i]);
            j++;
        }

    }
}
int main(){
    vector<int> nums={1,2,3,4,0,0,9};
    movezeroes(nums);
    for(int d:nums){
        cout<<d<<" ";
    }
    return 0;
}