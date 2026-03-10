# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
        n = 0
        temp = head
        while temp:
            temp = temp.next
            n += 1

        mid = n // 2

        result = head
        for i in range(mid):
            result = result.next

        return result
        