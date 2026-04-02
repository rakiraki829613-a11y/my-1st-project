#include<iostream>
using namespace std;

int main(){
    int nums[]={4,3,32,2,1};
    int size=5;
    int smallest=INT16_MAX;
    for(int i=0;i<size;i++){
        smallest=min(nums[i],smallest);
    }
    cout<<"smallest ="<<smallest<<endl;
return 0;
}
