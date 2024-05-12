class Solution(object):
    def reverseString(self, s):
        """
        :type s: List[str]
        :rtype: None Do not return anything, modify s in-place instead.
        """
        start_idx=0
        end_idx=len(s)-1
        temp=""
        while start_idx<end_idx:
            temp=s[start_idx]
            s[start_idx]=s[end_idx]
            s[end_idx]=temp
            start_idx+=1
            end_idx-=1
    
        
                    
s=Solution()

test1 = ["h","e","l","l","o"]

s.reverseString(test1)
print(test1)
