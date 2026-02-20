# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        result = None

        if list1 is None:
            return list2

        if list2 is None:
            return list1

        if list1.val < list2.val:
            result = list1
            list1 = list1.next
        else:
            result = list2
            list2 = list2.next

        cur = result

        while list1 is not None or list2 is not None:
            if list1 is None:
                cur.next = list2
                list2 = list2.next
                cur = cur.next
                continue
            
            if list2 is None:
                cur.next = list1
                list1 = list1.next
                cur = cur.next
                continue

            if list1.val < list2.val:
                cur.next = list1
                cur = cur.next
                list1 = list1.next
            else:
                cur.next = list2
                cur = cur.next
                list2 = list2.next

        return result