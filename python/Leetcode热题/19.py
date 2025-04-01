from typing import List
from typing import Optional

class ListNode:
    def __init__(self,val=0,next=None):
        self.val=val
        self.next=next


class Solution:
    def removeNthFromEnd(self,head:Optional[ListNode],n:int)->Optional[ListNode]:
        dummy=ListNode(next=head)
        # 定义快指针
        fast=dummy

        while n!=0:
            fast=fast.next
            n=n-1

        # 定义慢指针
        slow=dummy

        while fast.next!=None:
            fast=fast.next
            slow=slow.next

        # 删除节点
        slow.next=slow.next.next

        return dummy.next 

def print_list(head:Optional[ListNode]):
    current=head
    while current!=None:
        print(current.val," ")
        current=current.next



solution=Solution()

tail=ListNode(1)
tail.next=ListNode(2)
tail.next.next=ListNode(3)
tail.next.next.next=ListNode(4)
tail.next.next.next.next=ListNode(5)

if __name__=='__main__':
    ans=solution.removeNthFromEnd(tail,2)
    print_list(ans)
