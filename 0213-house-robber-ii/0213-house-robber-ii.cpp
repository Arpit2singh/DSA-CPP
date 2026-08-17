class Solution {
public:
    int check(vector<int>&nums , vector<int>&dp , int idx , int size){
        if(idx>=size){
        return 0 ; 
        }
        if(dp[idx] != -1) return dp[idx] ; 

        return dp[idx] = max(nums[idx] + check(nums , dp , idx+2 , size) , check(nums, dp , idx+1 , size) ) ; 
    }
    int rob(vector<int>& nums) {
        if(nums.size() == 1) return nums[0] ; 
        vector<int>dp1(nums.size()+1 , -1) ;
        vector<int>dp2(nums.size()+1 , -1) ; 
        int idx1 = 0 ; 
        int ans1 = check(nums , dp1 , idx1 , nums.size()-1)  ; 
        int idx2 = 1 ; 
        int ans2 = check(nums , dp2 , idx2 , nums.size()) ; 

        return max(ans1 , ans2) ; 
    }
};