#include<iostream>
#include<vector>
using namespace std;

int meargesortedarray(vector<int>& nums1,int n,vector<int>& nums2,int m){
    int i=n-1;
    int j=m-1;
    int k=n+m-1;
    while(nums1[i]>=0 && nums2[j]>=0){
        if(nums1[i]>=nums2[j]){
            nums1[k]=nums1[i];
            i--;
        }
        else{
            nums1[k]=nums2[j];
            j--;
        }
        k--;
    }
    while (nums2[j]>=0){
        nums1[k]=nums2[j];
        j--;
        k--;

    }
    
}
int main(){
    vector<int>nums1={11,32,10,3,45};
    int n=5;
    vector<int>nums2={6,5,4,3,2};
    int m=5;
    meargesortedarray(nums1,n,nums2,m);
    for(int r:nums1){
        cout<<r<<"  ";
    }
    return 0;
}