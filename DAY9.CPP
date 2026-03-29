#include<iostream>
using namespace std;

int SUM(int n){
    int ha=0;
    for(int i=1;i<=n;i++){
        ha=ha+i;
    }
    return ha;
}
int main(){
    cout<<SUM(7)<<endl;
    return 0;
}