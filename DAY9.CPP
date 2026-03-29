#include<iostream>
using namespace std;

int mini(int a, int b){
    if(a<b){
        return a ;
    }else{
        return b;
    }
}
int main(){
    cout<<mini(6,9)<<endl;
    return 0;
}
    