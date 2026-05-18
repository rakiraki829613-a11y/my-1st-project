#include<iostream>
#include<algorithm>
using namespace std;

int teversethestring(string s){
    int start=0;
    for(int i=0;i<=s.size();i++){
        if(i==s.size() || s[i]==' '){
            reverse(s.begin()+start,
        s.begin()+i);
        start=i+1;
        }
    }
    return 0;
}
int main(){
    string s="hellow";
     cout<<teversethestring(s);
     return 0;
}