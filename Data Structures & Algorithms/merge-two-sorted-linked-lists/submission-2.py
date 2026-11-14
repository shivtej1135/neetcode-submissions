# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        if list1 is None:
            return list2
        if list2 is None:
            return list1
        temp1 = list1
        temp2 = list2
        temp = ListNode(0)
        temp3= temp
        while temp1 is not None and temp2 is not None:
            if(temp1.val>temp2.val):
                temp.next = temp2
                temp = temp.next
                temp2 = temp2.next
            else:
                temp.next = temp1
                temp = temp.next
                temp1 = temp1.next

        while temp1 is not None:
            temp.next = temp1
            temp = temp.next
            temp1 = temp1.next
        while temp2 is not None:
            temp.next = temp2
            temp = temp.next
            temp2 = temp2.next
        return temp3.next



        