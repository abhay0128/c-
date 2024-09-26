#include <iostream>
#include <vector>
using namespace std;

// O(n)
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, 1);
        for(int i=1; i<n; i++){
            result[i] = result[i-1] * nums[i-1];
        }
        int suffix =1;
        for(int j=n-2; j>=0; j--) {
            suffix *= nums[j+1];
            result[j] *= suffix;
        }
        return result;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 4};
    vector<int> res = sol.productExceptSelf(nums);
    for(int val: res) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}