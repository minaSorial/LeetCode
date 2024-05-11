from typing import List


class Solution:
     def firstUniqChar(self, s):
        d = {}
        for i in s:
            if i not in d:
                d[i] = 1
            else:
                d[i] += 1
        
        for i in range(len(s)):
            if d[s[i]] == 1:
                return i
        return -1
    
s=Solution()
strin="aabb"
print(s.firstUniqChar(strin))
