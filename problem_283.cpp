//this problem is not solve yet 
#include <bits/stdc++.h>
using namespace std;
int main() {
    int nums[] = {0,1,0,3,12};
    int s = sizeof(nums)/sizeof(nums[0]);
    for(int i=0; i<s; ++i){
        for(int j=0; j<s-i-1; ++j){
            if(nums[j] == 0){
                int temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }
    for(int i : nums){
        cout << i << " ";
    }
    return 0;
}
