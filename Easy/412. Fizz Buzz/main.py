from typing import List


class Solution:
    def fizzBuzz(self, n: int) -> List[str]:
        ans=[]
        for i in range (1 , n+1):

            divisable_by_3= i%3
            divisable_by_5= i%5
            if divisable_by_3==0 and divisable_by_5==0:
                 ans.append("FizzBuzz")
            elif divisable_by_3==0:
                  ans.append("Fizz")
            elif divisable_by_5==0:
                  ans.append("Buzz")
            else:
                ans.append(str(i))
        
        return ans
    
s=Solution()
print(s.fizzBuzz(15))
