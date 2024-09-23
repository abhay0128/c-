#include <iostream>
using namespace std;

class Solution {
public:
    double calcPow(double x, int n) {
        if(n==0 || x ==1 || (x==-1 && n%2 ==0)) return 1.0;
        if(x==0) return 0.0;
        if(x==-1 && n%2 !=0) return -1.0;

        long binForm = n;
        if(n<0) {
            x = 1/x;
            binForm = -binForm;
        }

        double result = 1;
        while(binForm >0){
            if(binForm % 2 == 1) {
                result *=x;
            }
            x *= x;
            binForm /=2;
        }
        return result;
    }

};

int main() {
    Solution sol;
    double a = sol.calcPow(5, 5);
    cout << a << endl;
}