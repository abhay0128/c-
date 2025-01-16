#include <iostream>
#include <vector>
using namespace std;

// find single element in a sorted array where each element is repeated exactly
// two times except one element, find that one element.
class Solution {
    public:
        int findSingleElement(vector<int>& nums) {
            int n = nums.size();

            if( n== 1) return nums[0];

            int st=0, end=n-1;
            while(st<=end) {
                int mid = st + (end-st)/2;
                // edge case
                if(nums[0]!= nums[1]) return nums[0];
                if(nums[n-1]!=nums[n-2]) return nums[n-1];

                if(nums[mid-1] != nums[mid] && nums[mid]!=nums[mid+1]) return nums[mid];

                if(mid%2 ==0){
                    if(nums[mid-1]==nums[mid]){
                        end = mid-1;
                    } else {
                        st = mid+1;
                    }
                } else {
                    if(nums[mid-1] == nums[mid]){
                        st = mid+1;
                    } else {
                        end = mid-1;
                    }
                }
            }
            return -1;
        }
};

int main() {
    Solution sol;
    vector<int> vec = {1,1,2,2,3,3,4,8,8};

    int result = sol.findSingleElement(vec);
    cout << "Single element is: " << result << endl;

    return 0;
}

// time complexity: O(log n)
// space complexity: O(1)
// leetcode problem 540