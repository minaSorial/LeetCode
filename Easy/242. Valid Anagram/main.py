
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        is_angram=True
        char_dic={}
        if len(s)==len(t):
            for ch in s:
                if ch not in char_dic:
                    char_dic[ch]=1
                else:
                    char_dic[ch]+=1
            
            for ch in t:
                if ch not in char_dic:
                    is_angram=False
                    break
                else:
                    char_dic[ch]-=1
                    if char_dic[ch]==0:
                        char_dic.pop(ch)
        else: 
             is_angram=False
            
        return  is_angram    



        
t1 = "anagram"
t2 = "nagaram"
s=Solution()
print(s.isAnagram(t1,t2))

