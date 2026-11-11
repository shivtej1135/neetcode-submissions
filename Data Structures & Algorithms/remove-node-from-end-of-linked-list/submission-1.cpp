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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL || head->next==NULL){
            return NULL;
        }
        ListNode*temp=head;
        int count = 0;
        while(temp!=NULL && temp->next!=NULL){
            temp=temp->next;
            count++;
        }
        count = count +1;
        int length= count-n;
        ListNode*prev=head;
        temp=head;
        if(n==count){
            return head->next;
        }
        count =0;
        
        while(count!=length){
            prev=temp;
            temp=temp->next;
            count++;
        }
        prev->next= temp->next;
        delete temp;
        return head;

    }
};
