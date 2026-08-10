class Solution {
public:
    bool check(int node  , vector<int>&visited , unordered_map<int,vector<int>>&mp){
        visited[node] = 1; 
        
        for(auto elem : mp[node]){
            if(!visited[elem]){
                if(!check(elem , visited , mp)) return false; 
            }
            else{
                if(visited[elem] == 1){
                    return false ;
                }
            }
        }
        visited[node] = 2 ; 
        return true ; 
    }
    bool canFinish(int n, vector<vector<int>>& nums) {
        unordered_map<int, vector<int>>mp ; 

        for(int i = 0 ; i<nums.size() ; i++){
            // u<-v ;
            int u = nums[i][0] ; 
            int v = nums[i][1] ; 
            mp[v].push_back(u) ; 
        }

        vector<int>visited(n,0) ; 

        for(int i = 0 ; i<n; i++){
            if(!visited[i]){
                if(!check(i , visited , mp)) return false ; 
            }
            else{
                if(visited[i] == 1){
                    return false ;
                }
            }
        }

        return true ;

    }
};