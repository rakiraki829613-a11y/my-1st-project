#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr={1,2,5,68,9};
    int n=5;
     for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                 int temp=arr[j];
                 arr[j]=arr[j+1];
                 arr[j+1]=temp;
            }
        }
     }
     for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";

     }
     return 0;
}