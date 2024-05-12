#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>


using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int start_idx = 0;
        int end_idx = s.size()-1;
        char temp = ' ';

        while (start_idx < end_idx)
        {
            temp = s[start_idx];
            s[start_idx] = s[end_idx];
            s[end_idx] = temp;
            start_idx++;
            end_idx--;
        }

    }
};



int main() {


    Solution s = Solution();
    vector<char> t1 = { 'o', 'l', 'l', 'e', 'h' };

    s.reverseString(t1);

    for (auto&& i : t1)
    {
        cout << i << endl;
    }



    return 0;
}