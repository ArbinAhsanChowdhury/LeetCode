#include <bits/stdc++.h>
using namespace std;
int main() {
    int flag=0;
    int nums[] = {1,2,3};
    vector<int> test;
    for(int i: nums){
        test.push_back(i);
        for(int j: test){
            if(i == j){
                flag++;
            }
        }
        if(flag == 2){
            cout << "true";
            return 0;
        }else{
            flag=0;
        }
    }
    cout << "false";
    return 0;
}
