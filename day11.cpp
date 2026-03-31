#include<iostream>
using namespace std;

int binarynum(int decinum){
    int ans=0; int pow=1;
    while(decinum>0){
    int rem=decinum%10;
    ans=ans+(rem*pow);
    decinum=decinum/10;
    pow=pow*2;
    }
    return ans;
}
int main(){
        cout<<binarynum(101)<<endl;
        return 0;
}
