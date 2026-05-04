#include<iostream>
#include<vector>
using namespace std;

vector<int> prodectself(vector<int>& nums){
    int n=nums.size();
    vector<int> ans(n,1);

    //steps 1;left product
    int left=1;
    for(int i=0;i<n;i++){
        ans[i]=left;
        left*=nums[i];
    }
    //steps 2;right product
    int right=1;
    for(int i=0;i<n;i++){
        ans[i]*=right;
        right*=nums[i];
        }
        return ans;
}
int main(){
    vector <int> nums={1,2,3,4};
    vector<int> result=prodectself(nums);
    cout<<"output";
    for(int y:result){
        cout<<y<<" ";
    }
}