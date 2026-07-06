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

    ListNode * merge(ListNode* head , ListNode* mid){
            ListNode * temp1 = head ;
            ListNode * temp2 = mid ;
            ListNode * dummy = new ListNode(-1) ;
            ListNode * temp3 = dummy ; 

            while (temp1 != nullptr && temp2 != nullptr ){
                if (temp1->val <= temp2->val){
                    temp3->next = temp1;
                    temp1 = temp1->next;
                }else {
                     temp3->next = temp2;
                     temp2 = temp2->next;
                }
                 temp3 = temp3->next ; 
            }
            while(temp1 != nullptr){
                temp3->next = temp1;
                temp3 = temp3->next;
                temp1 = temp1->next; 
            }
            while( temp2 != nullptr){
                temp3->next = temp2;
                temp3 = temp3->next;
                temp2 = temp2->next; 
            }
            return dummy->next ;
    }


    ListNode* sortList(ListNode* head) {
        if(head == nullptr || head->next == nullptr){
            return head ; 
        }

        ListNode * fast = head ; 
        ListNode * slow = head ;
        ListNode * prev = nullptr;

        while( (fast != nullptr) && (fast->next != nullptr)){
            fast = fast-> next-> next ; 
            prev = slow  ;
            slow = slow -> next ; 
        }

        prev-> next = nullptr ; 

        return merge(sortList(head) , sortList(slow)); 
    
    }
};