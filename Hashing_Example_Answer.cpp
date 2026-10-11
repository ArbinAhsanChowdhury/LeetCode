#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    // Hash map to store the value and its corresponding index
    unordered_map<int, int> numMap;
    
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        
        // Check if the complement exists in the hash map
        if (numMap.find(complement) != numMap.end()) {
            // Found the solution
            return {numMap[complement], i};
        }
        
        // Store the current number and its index in the map
        numMap[nums[i]] = i;
    }
    
    // Return an empty vector if no solution is found (though the problem guarantees one)
    return {};
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    
    vector<int> result = twoSum(nums, target);
    
    if (!result.empty()) {
        cout << "Indices: [" << result[0] << ", " << result[1] << "]" << endl;
    } else {
        cout << "No solution found." << endl;
    }
    
    return 0;
}
