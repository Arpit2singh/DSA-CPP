class Solution {
public:
    int check(vector<int>&nums , vector<int>&dp , int idx){
        if(idx>=nums.size()) return 0 ; 
        if(dp[idx] != -1) return dp[idx] ; 

        return dp[idx] =  max(nums[idx] + check(nums , dp , idx+2) , check(nums , dp, idx+1) ) ;  
    }
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size()+1 , -1) ; 
        int idx = 0 ; 
        return check(nums , dp , idx) ; 
    }
};