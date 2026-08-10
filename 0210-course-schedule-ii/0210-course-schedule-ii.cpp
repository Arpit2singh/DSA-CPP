class Solution {
public:
    bool check(int node , vector<int>&visited , vector<int>&v , unordered_map<int,vector<int>>&mp){
        visited[node] = 1 ; 
       

        for(auto elem : mp[node]){
            if(!visited[elem]){
         
            if(!check(elem , visited , v , mp)) return {};
          }
          else{
             if(visited[elem] == 1) return {} ; 
          }
        }
         v.push_back(node) ; 
        visited[node] = 2 ; 
        return true ; 
    }
    vector<int> findOrder(int n, vector<vector<int>>& nums) {
        unordered_map<int,vector<int>>mp ; 

        for(int i = 0 ; i<nums.size() ; i++){
            int u = nums[i][0] ; 
            int v = nums[i][1] ; 
            // u<-v ; 
            mp[v].push_back(u) ; 
        }
        vector<int>visited(n , 0) ; 
        vector<int>v ; 

        for(int i = 0 ; i<n ; i++){
          if(!visited[i]){
      
            if(!check(i , visited , v , mp)) return {};
          }
          else{
             if(visited[i] == 1) return {} ; 
          }
        }
        reverse(v.begin() , v.end()) ; 
        return v ; 
    }
};