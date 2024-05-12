#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>


using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int, int> map;
        vector<int> inter;
        for (auto&& i : nums1) {
            map[i]++;
        }

        for (auto&& num : nums2) {
            if (map[num] >= 1) {
                inter.push_back(num);
                map[num]--;
            }
        }
        return inter;
    }
};



int main() {




    Solution s = Solution();
    vector<int> t1 = { 2,1 };
    vector<int> t2 = { 1,2 };

    auto res = s.intersect(t1, t2);

    for (auto&& i : res)
    {
        cout << i << endl;
    }



    return 0;
}