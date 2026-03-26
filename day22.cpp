#include<iostream>
using namespace std;

int main(){
    int marks;
    cout<<"enter the marks: ";
    cin >> marks;
    if(marks>=30 && marks<=40){
        cout<<" pass";
    
    }else{
        cout<<"fail";
    }
    return 0;

}