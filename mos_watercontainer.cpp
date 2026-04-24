
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxarea(vector<int>& height){
    int left=0;
    int right=height.size()-1;
    int maxwater=0;

    while(left<right){
        int h=min(height[left],height[right]);
        int width=right-left;   // ✅ fixed
        int area=h*width;

        maxwater=max(maxwater,area);

        if(height[left]<height[right]){
            left++;
        }
        else{
            right--;
        }
    }

    return maxwater;
}

int main(){
    vector<int> height={1,2,3,4};

    int result=maxarea(height);

    cout<<"maximum water = "<<result<<endl;

    return 0;
}