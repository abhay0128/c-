#include <iostream>
#include <vector>
using namespace std;

class SingleNumber {
    public:
        int findSingleNumber(vector<int>& nums) {
            int ans = 0;
            for(int val: nums) {
                ans ^= val;
            }
            return ans;
        }
};

int main() {
    SingleNumber singleNum;
    vector<int> vec = {4, 1, 1};

    int result = singleNum.findSingleNumber(vec);
    cout << "Single number is: " << result << endl;

    return 0;
}