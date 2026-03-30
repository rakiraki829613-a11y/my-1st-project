#include<iostream>
using namespace std;

int binarynum(int decinum){
     int ans=0,pow=1;
     while(decinum>0){
        int rem=decinum%2;
        decinum=decinum/2;
        ans=ans+(pow*rem);
        pow=pow*10;
     }
     return ans;
}
int main(){
    cout<<binarynum(48)<<endl;
    return 0;
}

