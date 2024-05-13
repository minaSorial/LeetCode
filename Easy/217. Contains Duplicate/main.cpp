#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include<algorithm>
#include <numeric> 


using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_map<int, int> num_map;
        bool has_dubs = false;
        for (auto&& n : nums)
        {
            if (num_map.count(n) == 0) {
                num_map[n] += 1;
            }
            else {
                has_dubs = true;
                break;
            }
        }
        return has_dubs;

    }


    bool containsDuplicate2(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        for (size_t i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i] == nums[i + 1])
            {
                return true;
            }

        }
        return false;


    }
};


int main() {


    Solution s = Solution();

    vector<int> t1 = { 9,6,0,2,3,5,7,0,1 };

    bool missing = s.containsDuplicate2(t1);


    cout << missing << endl;




    return 0;
}