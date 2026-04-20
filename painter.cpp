#include<iostream>
#include<vector>
using namespace std;

int ispossibile(vector<int>& arr,int n,int m,int maxallowedvalue){
    int painter=1,time=0;
    for(int i=0;i<=n;i++){
        if(time+arr[i]<=maxallowedvalue){
            time+=arr[i];
        }
        else{
            painter++;
            time=arr[i];
        }
    }
    return painter<=m;
}
int mintimetopaint(vector<int>& arr,int n,int m){
    int sum=0;int maxvalue=INT16_MIN;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        maxvalue=max(maxvalue,arr[i]);                                                                                                                                                                 
    }
    int st=maxvalue,end=sum,ans=-1;
    while (st<=end){
        int mid=st+(st-end);
        if (ispossibile(arr,n,m,mid)){
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
    vector<int>arr ={1,2,3,4};
    int n=4,m=2;
    cout<<mintimetopaint(arr,n,m)<<endl;
    return 0;
}
