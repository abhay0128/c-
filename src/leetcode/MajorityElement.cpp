#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// O(nlog n)
class Solution {
    public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        // sort
        sort(nums.begin(), nums.end());
        
        int freq = 1, result = nums[0];
        for(int i=1; i<n; i++) {
            if(nums[i] == nums[i-1]) {
                freq++;
            } else {
                freq=1;
                result = nums[i];
            }

            if(freq > n/2){
                return result;
            }
        }
        return result;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 2, 1, 1};
    int result = sol.majorityElement(nums);
    cout << "result:" << result << endl;
    return 0;
}