#include<iostream>
#include<vector>
using namespace std;

int myprofit(vector<int>& price){
    int maxprofit=0,bestbuy=price[0];
    for(int i=1;  i<price.size(); i++){
        if(price[i]>bestbuy){
        maxprofit=max(maxprofit,price[i]-bestbuy);
    }
    bestbuy=min(bestbuy,price[i]);
}
return maxprofit;
}
int main(){
    vector<int>price={1,2,3,4,9};
    int result=myprofit(price);
    cout<<"my profit"<<result<<endl;
    return 0;


}