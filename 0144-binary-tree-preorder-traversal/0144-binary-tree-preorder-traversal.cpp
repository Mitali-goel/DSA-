/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
     // method -1  Iterative method / recursive method    
        // vector<int> result ; 
        // helper (root , result) ; 
        // return result ; 

    // method - 2 stack method 
        vector<int> result ; 
        if (root == NULL)   return result ;
        stack<TreeNode*> st ; 
        st.push(root);
        while(!st.empty()){
            int s = st.size() ; 
            for (int i = 0 ; i < s ; i++){
                TreeNode * top = st.top() ;
                st.pop();
                result.push_back(top->val);
                if (top->right != NULL) st.push(top->right);
                if (top->left != NULL) st.push(top->left);
            }
        }
        return result ;
    }
    void helper(TreeNode * root , vector<int> &result){
       if (root != NULL){
        result.push_back(root->val);
        helper(root->left , result);
        helper(root->right , result) ;
       }
       return ;
    }

};