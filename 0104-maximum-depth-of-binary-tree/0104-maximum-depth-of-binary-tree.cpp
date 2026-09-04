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
    int check(TreeNode *root , int &maxi){
        if(!root) return 0 ; 
        int lh = check(root->left , maxi) ; 
        int rh = check(root->right , maxi) ; 

        maxi = max(lh + rh , maxi) ; 
        return 1 + max(lh, rh) ; 
    }
    int maxDepth(TreeNode* root) {
        if(!root) return  0 ; 
        if(!root->left && !root->right) return 1 ;
        int maxi = 0 ;  
        return check(root , maxi) ; 
    }
};