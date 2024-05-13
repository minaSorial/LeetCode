# Definition for singly-linked list.
from typing import Optional
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
        
class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        value_list=[]
        current_node=head
        while current_node.next!=None:
            value_list.append(current_node.val)
            current_node=current_node.next
        value_list.append(current_node.val)
        
        l_idx=0
        r_idx=len(value_list)-1
        is_palindrom=True
        while l_idx<r_idx:
            if value_list[l_idx]==value_list[r_idx]:
                l_idx+=1
                r_idx-=1
            else:
                is_palindrom=False
                break;
            
        return is_palindrom
            
        
        





head=ListNode(1)
t1=ListNode(2)
t2=ListNode(2)
t3=ListNode(1)
head.next=t1
head.next.next=t2
head.next.next.next=t3


s=Solution()
s.isPalindrome(head)
print(s.isPalindrome(head))

