#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include<algorithm>
#include <numeric> 


using namespace std;


//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        std::vector<int> num_list;

        while (head)
        {
            num_list.push_back(head->val);
            head = head->next;
        }

        int l_idx = 0;
        int r_idx = num_list.size() - 1;
        bool is_pal = true;
        while (l_idx < r_idx)
        {
            if (num_list[l_idx] == num_list[r_idx])
            {
                l_idx++;
                r_idx--;
            }
            else {
                is_pal = false;
                break;
            }

        }

        return is_pal;

    }
};



int main() {


    Solution s = Solution();

    ListNode* list_num = new ListNode();
    list_num->val = 1;

    ListNode* num1 = new ListNode(2);
    list_num->next = num1;

    ListNode* num2 = new ListNode(2);
    list_num->next->next = num2;

    ListNode* num3 = new ListNode(1);
    list_num->next->next->next = num3;


    bool missing = s.isPalindrome(list_num);


    cout << missing << endl;


    return 0;
}