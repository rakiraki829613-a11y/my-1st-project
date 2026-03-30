#include<iostream>
using namespace std;

int binarynum(int decinum){
    int ans=0; int pow=1;
    while(decinum>0){
    int rem=decinum%2;
    decinum=decinum/2;
    ans=ans+(pow*rem);
    pow=pow*10;
    }
    return ans;
}
int main(){
    int decinum=50;
    for(int i=1;i<=10;i++){
        cout<<binarynum(i)<<endl;
    }
    return 0;
}
