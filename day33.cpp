#include<iostream>
using namespace std; 

int main(){
    int a,b,c;
    cout<<"enter the value of a,b and c";
    cin>>a>>b>>c;
    if(a>=b && a>=b){
        cout<<"a is largest";
    }
    else if(b>=a && b>=c){
        cout<<"b is largest";
    }
    else{
        cout<<"c is largest";
    }
    return 0;
}