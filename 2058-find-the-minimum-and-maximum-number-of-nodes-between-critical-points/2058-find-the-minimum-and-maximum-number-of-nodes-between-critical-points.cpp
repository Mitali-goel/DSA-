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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode *prev = head;
        ListNode *curr = prev->next ;
        ListNode *future = curr->next ;
        vector<int>arr;
        int count = 2;
        while(future != nullptr){
            if(curr->val < prev->val && curr->val < future->val){
                arr.push_back(count);
            }else if(curr->val > prev->val && curr->val > future->val){
                arr.push_back(count);
            }
            count++;
            prev = prev->next;
            curr = curr-> next ;
            future = future->next;

        }
        if (arr.size() < 2){
            return {-1 , -1};
        }
        sort(arr.begin() , arr.end());
        int mindis = INT_MAX ;
        int maxdis = arr[arr.size()-1] - arr[0];
        int i = 0 ; int j = 1;
        while(j < arr.size()){
            mindis = min(mindis , arr[j] - arr[i]);
            i++;
            j++;
        }
        vector<int> result ;
        result.push_back(mindis);
        result.push_back(maxdis);
        return result ; ;
    }
};