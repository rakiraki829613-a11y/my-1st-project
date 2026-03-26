#include<iostream>
using namespace std;

int main(){
    int marks;
    cout<<"enter the marks: ";
    cin >> marks;
    if(marks>90){
        cout<<" topper";
    
    }else if(marks>=80 && marks <=90 ){
        cout<<"distiction";
    }else if(marks>=35 && marks<80){
        cout<<"pass";
    }else{
        cout<<"fail"; 
    }
    return 0;
  

}