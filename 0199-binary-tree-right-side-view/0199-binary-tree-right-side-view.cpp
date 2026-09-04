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
    vector<int> rightSideView(TreeNode* root) {
        if(!root) return {} ; 
        vector<vector<int>>v ; 
        deque<TreeNode*>dq ; 
        dq.push_back(root) ; 
        dq.push_back(nullptr); 
        vector<int>temp ; 
        while(!dq.empty()){
            auto front = dq.front() ; 
            dq.pop_front() ; 
            if(front != nullptr){
                if(front->left){
                    dq.push_back(front->left) ; 
                } 
                if(front->right){
                    dq.push_back(front->right) ; 
                }
                temp.push_back(front->val) ; 
            }
            else{
                if(!dq.empty()){ 
                   v.push_back(temp) ;   
                   temp.clear() ; 
                   dq.push_back(nullptr) ; 
                }
            }
        }
          v.push_back(temp) ; 
        vector<int>ans ;
        for(int i = 0 ; i<v.size() ; i++){
          ans.push_back(v[i].back()) ; 
        }
        return ans ; 
    }
};