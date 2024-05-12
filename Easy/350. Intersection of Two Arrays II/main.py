
class Solution(object):
    def intersect(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        if len(nums2)>len(nums1):
            temp_nums=nums1
            nums1=nums2
            nums2=temp_nums
        dic={}
        for num in nums2:
            if num in dic:
                dic[num]+=1
            else:
                dic[num]=1
        intersecion_list=[]
        for i in nums1:
            if i in dic:
                if dic[i]>=1:
                    intersecion_list.append(i)
                    dic[i]-=1
        return intersecion_list
                    
s=Solution()

test1=[2,1]
test2=[1,2]

print(s.intersect(test1,test2))
