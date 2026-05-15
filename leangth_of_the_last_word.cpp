#include<iostream>
#include<vector>
using namespace std;

int leangthofthelastword(string s){
    int leangth=0;
    int i=s.size()-1;
    while(i>=0 && s[i]==' '){
        i--;
    }
    while(i>=0 && s[i]!=' '){
        leangth++;
        i--;
    }
    return leangth;
}
int main(){
    string s=" hellow world";
    cout<<leangthofthelastword(s);
    return 0;
}