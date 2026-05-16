#include<iostream>
#include<string>
using namespace std;

bool capitalletter(string s){
     int capital=0;
     for(int i=0;i<s.size();i++){
        if(s[i]>='A'&& s[i]<='Z'){
            return true;
        }
     }
     if(capital==s.size()){
        return true;
     }
     if(capital==0){
        return true;
     }
     if(capital==1 &&s[0]>='A'&& s[0]<='Z'){
        return true;
     }
     return false;
}
int main(){
    string s="USA";
    if(capitalletter(s)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}