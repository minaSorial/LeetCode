#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>


using namespace std;

class Solution {
public:
    bool isPowerOfThree(int n) {
        bool is_power_3 = false;
        if (n <= 0) {
            is_power_3 = false;
        }
        else if (n == 1) {
            is_power_3 = true;
        }
        else {
            while (n >= 0) {
                if (n == 1) {
                    is_power_3 = true;
                    break;
                }
                else if (n % 3 == 0) {
                    n = n / 3;
                }
                else {
                    is_power_3 = false;
                    break;
                }
            }



        }
        return is_power_3;
    }
};



int main() {


    Solution s = Solution();
    int t1 = 3;
    cout << s.isPowerOfThree(t1) << endl;




    return 0;
}