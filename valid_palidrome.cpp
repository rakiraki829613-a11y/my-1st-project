#include<iostream>
#include<string>
using namespace std;

bool ispalindrome(string s){
    string temp="";
    for(char c:s){
        if(isalnum(c)){
        temp+=tolower(c);
    }
}
int left=0;
int right=temp.size()-1;
while(left<right){
    if(temp[left]!=temp[right]){
        return false;
    }
    left++;
    right--;
}
return true;
}
int main(){
    string s;
    cout<<"enter the string";
    getline(cin,s);
    if(ispalindrome(s)){
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }
}