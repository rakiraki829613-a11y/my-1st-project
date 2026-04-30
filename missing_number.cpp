#include<iostream>
#include<vector>
using namespace std;

int missingnumber(vector<int>&num){
    int n=num.size();
    int total=n*(n+1)/2;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=num[i];

    }
    return total-sum;
}
int main(){
    vector<int>num={3,0,1};
    cout<<missingnumber(num);
    return 0;
}