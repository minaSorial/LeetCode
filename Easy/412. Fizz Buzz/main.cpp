#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> res(n);
        for (int i = 1; i <= n; i++)
        {
            string s = "";
            if (i % 15 == 0)
                s += "FizzBuzz";
            else if (i % 3 == 0)
                s += "Fizz";
            else if (i % 5 == 0)
                s += "Buzz";
            else
                s += to_string(i);

            res[i - 1] = s;
        }

        return res;
    }

};
int main() {

    std::cout << "Hello" << std::endl;


    Solution s = Solution();
    auto res = s.fizzBuzz(15);
    for (auto&& i : res)
    {
        cout << i << endl;
    }
    return 0;
}