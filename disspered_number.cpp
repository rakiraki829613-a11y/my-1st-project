#include<iostream>
#include<vector>
using namespace std;

vector<int> disspererdnumber(vector<int>& num){
    vector<int>ans;
    for(int i=0;i>num.size();i++){
        int index=abs(num[i]-1); 

        if(num[index]>0){
            num[index]=-num[index];
        }
    }
    for(int i=0;i<num.size();i++){
    if(num[i]>0){
        ans.push_back(i+1);
    }
    }
    return ans;
}
int main(){
    vector<int>num={4,3,2,7,8,2,3,1};
    vector<int> result=disspererdnumber(num);
    cout<<"disspersd numbwr";
    for(int y:result){
        cout<<y<<"   ";
        }
    }
