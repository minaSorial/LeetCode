#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>


using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int left = 0;
        for (int right = 0; right < nums.size(); right++)
        {
            if (nums[right] != 0)
            {
                swap(nums[right], nums[left]);
                left++;
            }
        }

    }

};



int main() {


    Solution s = Solution();

    vector<int> t1 = { 0,1,0,3,12 };
    vector<int> t2 = { 1,2 };

    s.moveZeroes(t1);

    for (auto&& i : t1)
    {
        cout << i << endl;
    }



    return 0;
}