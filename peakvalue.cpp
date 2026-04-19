#include<iostream>
#include<vector>
using namespace std;

int peakindex(vector<int>& A){
    int st=1,end=A.size()-1;
    while(st<end){
        int mid=st+(end-st)/2;
        if(A[mid]>A[mid-1]&&A[mid]>A[mid+1]){
            return mid;
        }
        else if(A[mid-1]<A[mid]){
            st=mid+1;

        }
        else{
            end=mid-1;
        }
    }
    return -1;
}
int main(){
    vector<int> A ={1,3,5,4,2};
    int restlt=peakindex(A);
    cout<<" peak index is"<<restlt<<endl;
    return 0;
}