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


// TC  = O(N/2)  to find middle + O(N/2) to reverse + O(N/2)  to find sum
// SC = O(1)

// reverse fn 
    ListNode* reverse (ListNode* head){
        ListNode * prev = nullptr;  
        ListNode * curr = head;  
        ListNode * fut = nullptr;  
        while (curr != nullptr){
            fut = curr -> next ; 
            curr -> next = prev ; 
            prev = curr ;
            curr = fut ; 
        }
        return prev ; 
    }


    int pairSum(ListNode* head) {

/// find middle      
        ListNode * fast = head ; 
        ListNode * slow = head ; 
        while (fast != nullptr && fast->next != nullptr){
            fast = fast->next->next ; 
            slow = slow -> next ; 
        }

// call reverse fn 
        ListNode * headReverse =   reverse(slow); 

        ListNode * temp1 = head ; 
        ListNode * temp2 = headReverse; 

// find max_sum 
        int max = 0;

        while (temp1 != nullptr && temp2 != nullptr){
            if ((temp1->val + temp2 -> val) > max ){
                max = temp1->val + temp2 -> val;
            }
            temp1 =  temp1->next ; 
            temp2 =  temp2->next ; 
        }
        
        return max ; 
        
    }
};