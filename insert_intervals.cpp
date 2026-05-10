#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> insert(vector<vector<int>> intervals,vector<int>&newinterval){
    vector<vector<int>>ans;
    int i=0;
   int n=intervals.size();
    while(i<n && intervals[i][1]<newinterval[0]){
        ans.push_back(intervals[i]);
        i++;

    }
    while(i<n && intervals[i][0]<=newinterval[1]){
        newinterval[0]=min(newinterval[1],intervals[i][1]);
        newinterval[1]=max(newinterval[0],intervals[i][0]);
        i++;
        
    }
    ans.push_back(newinterval);
    while (i<n){
        ans.push_back(intervals[i]);
        i++;

    }
    return ans;
    
    

}
int main(){
    vector<vector<int>> intervals={
        {1,3},{6,9}
    };
    vector<int> newinterval={2,5};
    vector<vector<int>>ans=insert(intervals,newinterval);
    for(auto x:ans){
        cout<<"["<<x[0]<<","<<x[1]<<"]";
    }
        return 0;
    
    }