class Solution(object):
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        
        idx_left=0
        for right_idx in range(len(nums)):
            if nums[right_idx]!=0:
                temp= nums[right_idx]
                nums[right_idx]=nums[idx_left]  
                nums[idx_left]=temp
                idx_left+=1       
            


        
nums1 = [0,1,0,3,12]
s=Solution()
s.moveZeroes(nums1)
print(nums1)
