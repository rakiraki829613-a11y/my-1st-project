#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class solution{
    public:
    int maximunproduc(vector<int>&nums){
    int n=nums.size();
    int maxprod=nums[0];
    int minprod=nums[0];
    int ans=nums[0];
    for(int i=1;i<n;i++){
        if(nums[i]<0){
            swap(maxprod,minprod);
        }
        maxprod=max(nums[i],maxprod*nums[i]);
        minprod=min(nums[i],minprod*nums[i]);
        ans=max(ans,maxprod);
    }
    return ans;
}
};
int main(){
    solution obj;

    vector<int> nums={2,3,-2,4};
    cout<<"maximum product"<<obj.maximunproduc(nums);
    retur                                                                                                                                                                                                                                                                                                                               n 0;

}
