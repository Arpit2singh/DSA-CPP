class Solution {
public:
    bool check(int curr , int dest , unordered_map<int, vector<int>>&mp , unordered_set<int>&st){
        if(curr == dest) return true ; 
        if(st.count(curr)) return true ;
 st.insert(curr) ; 
        for(auto elem : mp[curr]){
           if(!st.count(elem) && check(elem , dest , mp , st)){
                return true ; 
            }
           
        }
        return false; 
    }
    vector<int> findRedundantConnection(vector<vector<int>>& nums) {
        unordered_map<int,vector<int>>mp ; 
      
        for(int i = 0 ; i<nums.size() ; i++){
            int u = nums[i][0] ; 
            int v = nums[i][1] ;
            unordered_set<int>st ; 
            if(check(u , v , mp , st)){
                return {u,v} ; 
            }

            mp[u].push_back(v) ; 
            mp[v].push_back(u) ; 
        }
        return {-1,-1} ;
    }
};