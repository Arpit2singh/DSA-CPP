class Solution {
public:
    void check(vector<int>&nums , vector<vector<int>>&v , vector<int>temp , int target , int idx ){
        if(target < 0 || idx >= nums.size()){
            return ; 
        } 
        if(target == 0){
            v.push_back(temp) ; 
            return ; 
        }
       
        temp.push_back(nums[idx]) ; 
        check(nums , v , temp , target-nums[idx] , idx) ;
        temp.pop_back() ; 
        check(nums , v , temp , target , idx+1) ;  
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int>temp ; 
        vector<vector<int>>v; 

        check(nums , v , temp , target , 0) ; 
        return v ; 
    }
};