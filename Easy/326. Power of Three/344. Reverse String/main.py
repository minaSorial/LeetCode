class Solution:
    def isPowerOfThree(self, n: int) -> bool:
       if n<=0:
            return False
       if n==1:
             return True
       else:
            n=abs(n)
            while n>=0:
                if n==1:
                    return True
                elif n%3==0:
                    n=int(n/3)
                else:
                    return False
             
            
                
                
s=Solution()

test1 = -1

print(s.isPowerOfThree(test1))
