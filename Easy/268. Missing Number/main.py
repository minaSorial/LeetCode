class Solution(object):
    def missingNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        sum_range=sum(range(len(nums)+1))
        list_sum=sum(nums)
        return sum_range- list_sum
            


        
nums1 = [3,0,1]
s=Solution()
print(s.missingNumber(nums1))
