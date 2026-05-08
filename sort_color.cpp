#include<iostream>
#include<vector>
using namespace std;

int sortcolor(vector<int>&nums){
    int low=0,mid=0,high=nums.size()-1;
    while(mid<=high){
        //if element is 0
        if(nums[mid]==0){
            swap(nums[mid],nums[low]);
            low++;
            mid++;
        }
        // nelement is 1
        else if(nums[mid]==1){
            mid++;
              }
              else{
                swap(nums[mid],nums[high]);
              }
            }
        }
    

int main(){
    vector<int> nums={1,2,0,1,2,0,1,2,0};
    sortcolor( nums);
    for(int y:nums){
        cout<<y<<endl;
    }
    return 0;
}