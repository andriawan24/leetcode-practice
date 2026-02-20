# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        head = None

        if list1 is None or list2 is None:
            return list1 if list1 is not None else list2

        if list1.val < list2.val:
            head = list1
            list1 = list1.next
        else:
            head = list2
            list2 = list2.next

        current = head

        while list1 or list2:
            if not list1:
                current.next = list2
                list2 = list2.next
            elif not list2:
                current.next = list1
                list1 = list1.next
            elif list1.val < list2.val:
                current.next = list1
                list1 = list1.next
            else:
                current.next = list2
                list2 = list2.next

            current = current.next            
                
        return head