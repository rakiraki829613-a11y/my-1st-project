#include<iostream>
#include<vector>
using namespace std;

vector<int> plusone(vector<int>& num){
    for(int i=num.size()-1;i>=0;i++){
        if(num[i]<9){
            num[i]++;
            return num;
        }
        
        num[i]=0;
    }
    num.insert(num.begin(),1);
    return num;
}
int main(){
    vector<int>num={1,2,3,4,5};
    plusone(num);
    for(int h:num){
        cout<<h<<"  ";
    }
    return 0;
    
}