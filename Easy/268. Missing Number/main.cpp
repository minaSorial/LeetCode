#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include<algorithm>
#include <numeric> 


using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n = nums.size();
        auto arry_sum = accumulate(nums.begin(), nums.end(), 0);

        int num1 = 0;
        int sum = 0;
        for (int i = num1; i <= n; i++)
            sum = sum + i;

        return(sum - arry_sum);

    }
};



int main() {


    Solution s = Solution();

    vector<int> t1 = { 9,6,4,2,3,5,7,0,1 };

    int missing = s.missingNumber(t1);


    cout << missing << endl;




    return 0;
}