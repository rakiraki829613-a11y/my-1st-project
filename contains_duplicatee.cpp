#include<iostream>
#include<vector>
#include<set>
using namespace std;

bool containsduplicate(vector<int>& nums ){
    set<int>s;
    for(int i=0;i<nums.size();i++){
        if(s.find(nums[i]) != s.end()){
            return true;

        }
        s.insert(nums[i]);

    }
    return false;
}
int main(){
    vector<int> nums={1,2,3,4,5,5};
    if(containsduplicate(nums)){
        cout<<"duplicale ede yaar"<<endl;
    }
    else{
        cout<<"duplicate ella"<<endl;
    }
}