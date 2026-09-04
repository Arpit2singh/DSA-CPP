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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        deque<pair<TreeNode*, pair<int ,int>>>dq ; 
        int row = 0 ; 
        int col = 0 ; 
        dq.push_back({root , {row ,col}}) ; 
        map<int,vector<pair<int,int>>>mp ; 
        while(!dq.empty()){
            auto front =dq.front() ; 
            dq.pop_front() ;
            if(front.first->left){
                dq.push_back({front.first->left , {front.second.first +1 , front.second.second -1}}) ; 
            }
            if(front.first->right){
            dq.push_back({front.first->right , {front.second.first +1 , front.second.second +1}}) ; 
            }
            mp[front.second.second].push_back({front.second.first , front.first->val }) ;
        }
        vector<vector<int>>v ; 
        for(auto &elem : mp){
            sort(elem.second.begin() , elem.second.end() , [](auto &a , auto &b){
                
                return a < b ; 
            });
            vector<int>temp ; 
            for(auto e : elem.second) temp.push_back(e.second) ; 
            v.push_back(temp) ; 
        }
        return v  ;
    }
};