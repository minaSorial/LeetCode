#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include<algorithm>
#include <numeric> 


using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {


        bool is_angram = true;

        if (s.size() != t.size())
        {
            is_angram = false;
        }
        else {
            unordered_map<char, int> char_dic;

            for (auto&& ch : s)
            {
                char_dic[ch] += 1;
            }

            for (auto&& ch : t)
            {
                if (char_dic.count(ch) == 0) {
                    is_angram = false;
                    break;

                }
                else {
                    if (char_dic[ch] > 0)
                    {
                        char_dic[ch]--;
                    }
                    else {
                        is_angram = false;
                        break;
                    }

                }

            }







        }
        return is_angram;



    }
};



int main() {


    Solution s = Solution();

    string t1 = "anagram";
    string t2 = "nagaram";

    bool missing = s.isAnagram(t1, t2);


    cout << missing << endl;




    return 0;
}