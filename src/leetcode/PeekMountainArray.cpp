#include <iostream>
#include <vector>
using namespace std;

// find peek index in a mountain array
class Solution {
    public:
    int findPeekIndex(vector<int>& nums) {
        int left = 1;
        int right = nums.size()-2;
        while(left<=right) {
            int mid = left+(right-left)/2;
            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
                return mid;
            } else if(nums[mid]>nums[mid-1]){
                left = mid+1;
            } else {
                right = mid-1;
            }
        }
        return -1;
    }

};

int main() {
    Solution sol;
    vector<int> nums = {0, 3, 4,6,7,8, 9, 5};
    cout << sol.findPeekIndex(nums) << endl;
}


// O(log n)

// [0,3,8,9,5,2]

// lt, rt, mid

// while(lt<=rt){
//     if(mid> mid-1 && mid> mid+1)
//     return mid;
//     if(mid>mid-1 && mid<mid+1){
//         lt=mid+1;
//     } else if(mid<mid-1 && mid>mid+1){
//         rt = mid-1;
//     }
// }