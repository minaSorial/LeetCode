from typing import List
class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        num_dic={}
        for n in nums:
            if n in num_dic:
                return True
            else:
                num_dic[n]=1
        return False

  
        
nums_list = [1,2,3,1]
s=Solution()
print(s.containsDuplicate(nums_list))

