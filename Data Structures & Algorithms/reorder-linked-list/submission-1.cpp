/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    // Reverse the linked list starting from slow
    ListNode* reverseList(ListNode* slow){
        ListNode* prev = NULL;
        ListNode* curr = slow;
        ListNode* next = slow;

        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        // Return head of reversed list
        return prev;
    }

    void reorderList(ListNode* head) {

        // Find the middle of the linked list
        ListNode* slow = head;
        ListNode* fast = head->next;

        while(fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
        }

        // Separate the two halves
        ListNode* second = slow->next;
        slow->next = NULL;

        // Reverse the second half
        ListNode* prev = reverseList(second);

        // First half
        ListNode* curr1 = head;

        // Reversed second half
        ListNode* curr2 = prev;

        // Merge both halves alternately
        while(curr2 != NULL){

            // Save the next nodes
            ListNode* temp1 = curr1->next;
            ListNode* temp2 = curr2->next;

            // Attach second-half node
            curr1->next = curr2;

            // Attach next first-half node
            curr2->next = temp1;

            // Move both pointers forward
            curr1 = temp1;
            curr2 = temp2;
        }
    }
};
