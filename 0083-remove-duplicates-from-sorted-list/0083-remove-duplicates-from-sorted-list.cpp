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
    ListNode* deleteDuplicates(ListNode* head) {
        
        if (head == nullptr)
        return nullptr;

        ListNode * prev = head ; 
        ListNode * temp = head->next ; 
        ListNode * upcom = nullptr ; 
        while(temp != nullptr){
            while (temp != nullptr && temp -> val == prev-> val){
                temp = temp->next ; 
            }
            prev->next = temp ; 

               if (temp == nullptr)
                break;

            prev = temp ; 
            temp = temp -> next ; 
        }
        return head ; 
    }
};