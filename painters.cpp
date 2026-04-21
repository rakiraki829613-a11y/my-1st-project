#include<iostream>
#include<vector>
using namespace std;

int ispossiable(vector<int>& arr,int n,int m,int maxiumallowed){
     int painter=1,time=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]+time<=maxiumallowed){
        time+=arr[i];
    } else{
        painter++;
        time=arr[i];
    }
    }
    return painter<=m;
}
int mintotimepaint(vector<int>& arr,int m,int n){
    int sum=0,maxval=INT8_MIN;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
        maxval=max(maxval,arr[i]);
    }
    int st=maxval,end=sum,ans=-1;
    while(st<=end){ 
        int mid=st+(end-st)/2;
        if(ispossiable(arr,n,m,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    return ans;

}
int main(){
    vector<int>arr={40,30,10,20};
    int n=4,m=2;
    cout<<mintotimepaint(arr,m,n)<<endl;
    return 0;
}