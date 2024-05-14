#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include<map>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // freq_map { num :#of occurance}
        unordered_map<int, int> nums_ferquencey;
        for (auto&& i : nums)
        {
            nums_ferquencey[i] += 1;
        }

        map<int, vector<int>*> map_ordered_by_freq;

        for (auto&& i : nums_ferquencey)
        {
            if (map_ordered_by_freq[i.second])
            {
                map_ordered_by_freq[i.second]->push_back(i.first);
            }
            else {

                vector<int>* v = new vector<int>;
                v->push_back(i.first);

                map_ordered_by_freq[i.second] = v;
                //std::cout << map_ordered_by_freq[i.second]->at(0) << endl;

            }
        }

        vector<int>kth_num_list;

        for (auto it = map_ordered_by_freq.crbegin(); it != map_ordered_by_freq.crend() && k > 0;it++)
        {

            //cout << it->first << endl;
            for (int i = 0;i < it->second->size();i++)
            {
                kth_num_list.push_back(it->second->at(i));
                k--;
                if (k == 0)
                    break;
            }
        }




        return kth_num_list;




    }
};



int main() {



std:vector<int> tt{ 4,1,-1,2,-1,2,3 };
    Solution s = Solution();
    int k = 2;
    std::vector<int> ans = s.topKFrequent(tt, k);

    for (int i : ans) {
        std::cout << i << endl;
    }

    //cout << "hello" << endl;
    return 0;
}