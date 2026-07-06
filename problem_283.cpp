#include <bits/stdc++.h>
using namespace std;
int main() {
        vector<int> nums = {0,1,0,3,12};
        int flag = 0;
        int s = sizeof(nums)/sizeof(nums[0]);
        sort(nums.begin(),nums.end());
        for(int i : nums){
            if(i == 0){
                flag++;
            }else{
                cout << i << " ";
            }
        }
        for(int i=0; i<flag; ++i){
            cout << "0 ";
        }

    return 0;
}
