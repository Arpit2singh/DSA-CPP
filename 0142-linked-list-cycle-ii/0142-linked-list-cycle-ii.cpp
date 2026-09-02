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
        if(!head || !head->next) return nullptr ; 

        ListNode *slow = head ; 
        ListNode *fast = head ; 

        while(fast != nullptr && fast->next != nullptr && fast->next->next != nullptr){
            fast = fast->next->next ; 
            slow = slow->next ; 

            if(fast == slow){
                ListNode *temp = head ; 
                while(temp != fast){
                    temp = temp->next ; 
                    fast = fast->next ; 
                }
                return temp ; 
            }
        }

        return nullptr ; 

    }
};