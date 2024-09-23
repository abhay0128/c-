#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;
        int left=0, right=height.size();
        while(left<right) {
            int width = right-left;
            int ht = min(height[left], height[right]);
            int currWater = width * ht;
            maxWater = max(maxWater, currWater);
            height[left] < height[right] ? left++ : right--;
        }
        return maxWater;
    }
};

int main() {
    Solution sol;
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << sol.maxArea(height) << endl;
    return 0;
}