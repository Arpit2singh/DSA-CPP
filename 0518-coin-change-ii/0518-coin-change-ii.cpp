class Solution {
public:
    int check(int amount , vector<int>&coins , int idx , vector<vector<int>>&dp){
          if(amount == 0) return 1 ; 
          if(amount<0 || idx>=coins.size()) return 0 ; 
          
          
          if(dp[amount][idx] != -1) return dp[amount][idx] ; 
          
        
          int take = check(amount-coins[idx] , coins , idx , dp) ;
          int skip = check(amount , coins , idx+1 , dp) ; 
        //   if(take != INT_MAX){
        //   return dp[amount][idx] = 1 + take ; 
        //   }
        //   return dp[amount][idx] = skip ; 
          return dp[amount][idx] =  take + skip ; 
    }
    int change(int amount, vector<int>& coins) {
        vector<vector<int>>dp(amount+1 , vector<int>(coins.size()+1 , -1));
        int idx = 0 ; 
        int ans= check(amount , coins , idx , dp) ;
        return ans == INT_MAX ? 0 : ans ;
    }
};