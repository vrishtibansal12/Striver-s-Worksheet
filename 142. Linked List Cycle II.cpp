/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(!head)
            return NULL;
        
        ListNode *slow=head;
        ListNode *fast=head;
        
        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow)
                break;
        }
        if(!(fast->next && fast->next->next))
            return NULL;
        ListNode *temp=head;
        while(temp!=slow){
            slow=slow->next;
            temp=temp->next;
        }
        return temp;
    }
};