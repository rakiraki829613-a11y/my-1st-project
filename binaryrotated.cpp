#include<iostream>
#include<vector>
using namespace std;

int binaryrotatree(vector<int>& A,int tar){
    int st=0, end=A.size()-1;
    while (st<=end){
        int mid=st+(end-st)/2;
        if(A[mid]==tar){
            return mid;
        }
        if(A[st]<=tar  && A[mid]<=tar  )  {
            end=mid-1;
        }  else{
            end=mid+1;
        } 
        if(A[mid]<=tar && A[end]<=tar){
            end=mid+1;
        }else{
            end=mid-1;
        }
    }
  return -1;  
    
}
int main(){
    vector<int>A={1,3};
    int tar=1;
    int index=binaryrotatree(A,tar);
    cout<<" 1 occurs index is"<<index<<endl;
    return 0;

}