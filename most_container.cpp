5
Chats
11:57 pm
10:49 pm
8:55 pm
2
7:11 pm
2
12:25 pm
11:35 am
11:00 am
10:17 am
9:28 am
Yesterday
1
10:12 pm
27
Wednesday
Tuesday
Tuesday
Tuesday
Monday
Sunday
Sunday
Sunday
Saturday
17/04/2026
15/04/2026
15/04/2026
14/04/2026
14/04/2026
13/04/2026
12/04/2026
1
07/04/2026
07/04/2026
03/04/2026
28/03/2026
26/03/2026
23/03/2026
22/03/2026
19/03/2026
10/03/2026
09/03/2026
25/02/2026
20/02/2026
15/02/2026
15/02/2026
14/02/2026
12/02/2026
19/02/2026
19/02/2026
16/01/2026
11/01/2026
05/01/2026
27/12/2025
19/12/2025
16/12/2025
19/12/2025
15/11/2025
11/11/2025
25/10/2025
12/10/2025
06/10/2025
26/09/2025
04/03/2026
22/09/2025
17/09/2025
14/09/2025
02/09/2025
21/08/2025
20/08/2025
Message yourself
27/12/2025
Communication Skills.pdf
3 pages•PDF•1 MB
8:55 pm

Download
31/01/2026
Compiled PPT.pptx
128 pages•PPTX•3 MB
8:03 pm

Download
18/02/2026
317
1:37 pm
14/04/2026
g++ file.cpp -o file
./file
git add .
git commit -m "message"
git push
10:45 pm
Saturday
class Solution {
public:
    int singleNonDuplicate(vector<int>& A) {
        int st = 0, end = A.size() - 1;

        while (st < end) {
            int mid = st + (end - st) / 2;

            // make mid even
            if (mid % 2 == 1) mid--;

            if (A[mid] == A[mid + 1]) {
                st = mid + 2;
            } else {
                end = mid;
            }
        }

        return A[st];
    }
};
3:22 pm
Sunday

in.pinterest.com
in.pinterest.com
share.google
https://share.google/images/gZc1kCSVFGRuL7dVi
5:56 pm
Tuesday
#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 3, 2, 4};
    int n = 4;

    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
9:19 pm
Today
#include <vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxWater = 0;

        while(left < right) {
            int h = min(height[left], height[right]);
            int width = right - left;
            int area = h * width;

            maxWater = max(maxWater, area);

            if(height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return maxWater;
    }
};
11:23 pm
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