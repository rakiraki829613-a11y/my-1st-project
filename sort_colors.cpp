#include<iostream>
#include<vector>
using namespace std;

void sortcolor(vector<int>& nums){
    int low=0, mid=0,high=nums.size()-1;
    while(mid<=high){
        if(nums[mid]==0){
            swap(nums[mid],nums[low]);
            low++;
            mid++;

        }
         else if(nums[mid]==1){
            mid++;

        }
        else{
            swap(nums[mid],nums[high]);
            high--;
        }
   
    }
}
int main(){
    vector<int>nums={1,2,3,1,2,3,1,2,3,1,2,1};
    sortcolor(nums);
    for(int r:nums){
        cout<<r<<"  "<<endl;    
    }
    return 0;

}

