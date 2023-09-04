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
    bool hasCycle(ListNode *head) {
        //  if(head==NULL || head->next==NULL)
        //     return false;
        ListNode* low=head;
        ListNode* high=head;
        
        while( high!=NULL && high->next!=NULL)
        {
            low=low->next;
            
            high=high->next->next;
            
            if(low==high)
                return true;
        }
        return false;
    }
};