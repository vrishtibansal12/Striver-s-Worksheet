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
    int lengthOfLinkedList(ListNode* head) {
        int length = 0;
        while(head != NULL) {
            ++length;
            head = head->next;
        }
    return length;
    }
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head)
            return head;
        
        ListNode * start = new ListNode();
        start -> next = head;
        
        int length = lengthOfLinkedList(head);
        
        k=k%length;
        k=length-k;
        ListNode* fast=head;
        ListNode* slow=head;
        ListNode* temp;
        
        if(k==length)
            return head;
        for(int i=1;i<k;i++)
            fast=fast->next;
        
        start->next=fast->next;
        temp=fast;
        while(fast->next)
            fast=fast->next;
        
        fast->next=slow;
        temp->next=NULL;
        
        return start->next;
        
        
    }
};