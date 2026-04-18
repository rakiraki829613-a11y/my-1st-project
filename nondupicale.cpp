#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:
    int duplicate(vector<int>& A){
        int st=0,end=A.size()-1;
        while(st<end){
            int mid=st+(end-st)/2;
            if(mid%2==1) mid--;
            if(A[mid]==A[mid+1]){
                st=mid+2;
            }else{
                end=mid;
            }

        }
        return A[st];
    }
    
};
int main(){
    vector<int>A={1,1,2,3,3,4,4};
    solution obj;
    int ans=obj.duplicate(A);
    cout<<"single element"<<ans<<endl;
    return 0;
    
}