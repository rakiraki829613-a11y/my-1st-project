#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> merge(vector<vector<int>>&intervals){
    vector<vector<int>> ans;
    sort(intervals.begin(),intervals.end());
    ans.push_back(intervals[0]); //1st interval na direct hagi ans alli hakonthivi//
    for(int i=1;i<intervals.size();i++){// 2nd interval entha loop start agutthe because 1st interval naan already ans alli haakidivi//
        if(intervals[i][0]<=ans.back()[1]){//current interval start less than or equal to last interval end overlapping edya or elav antha check madutthe like {1,3},{2,6} this is over lapping
            ans.back()[1]=max(ans.back()[1],intervals[i][1]);// bigger end value store maddutthe1
        }
        else{
            ans.push_back(intervals[1]);
        }
    }
    return ans;
}
int main(){
    vector<vector<int>> intervals={
        {1,3},
        {2,6},
        {8,10},
        {15,18}
    };
    vector<vector<int>>result=merge(intervals);
    cout<<"merged intervals";
    for(auto g:result){
        cout<<"["<<g[0]<<" ,"<<g[1]<<"]";
    }
    return 0;
}
