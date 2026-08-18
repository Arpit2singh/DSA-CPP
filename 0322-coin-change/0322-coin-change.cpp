class Solution {
public:
    int check(vector<int>&nums , int idx , int amount , vector<vector<int>>&dp){
           if(amount == 0){
            return 0 ; 
        }
        if(amount < 0) return INT_MAX;   
        if(idx >= nums.size()) return INT_MAX ; 
        if(dp[idx][amount] != -1) return dp[idx][amount] ;
     
      
        int take = check(nums , idx , amount-nums[idx] , dp) ; 
        int skip = check(nums , idx+1 , amount , dp) ; 
        if(take >= INT_MAX){
            return dp[idx][amount] = skip ; 
        }
        return dp[idx][amount] = min(1+take , skip) ; 
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>>dp(coins.size()+1 , vector<int>(amount+1 , -1)) ; 
        int idx  = 0 ; 
        int ans  = check(coins , idx , amount , dp) ; 
        return ans == INT_MAX ? -1 : ans  ; 
    }
};