#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>


using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> char_map;
        for (auto ch : s) {
            char_map[ch] += 1;
        }

        for (int i = 0; i < s.size();i++) {
            if (char_map[s[i]] == 1) {
                return i;
            }
        }
        return -1;
    }
};
int main() {




    Solution s = Solution();
    string t = "atbb";
    std::cout << s.firstUniqChar(t) << std::endl;
    return 0;
}