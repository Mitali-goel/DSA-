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
    ListNode* rotateRight(ListNode* head, int k) {

    // TC = O(2len)    
    // SC = O(1)
if (k == 0 ) return head ; 
if (head == nullptr) return nullptr;

    ListNode * tail = head ; 
    int length = 1 ; 
    while (tail-> next != nullptr){
        tail = tail -> next ;
        length ++;
    }

    tail -> next = head ; 

    k = k % length;
    int n = length - k ;
     ListNode * prev = nullptr ;
    ListNode * temp = head  ;
    while (n != 0){
        prev = temp ; 
        temp = temp -> next ; 
        n--;
    }

    prev -> next = nullptr;
    head = temp ; 

    return temp ; 


    }
};