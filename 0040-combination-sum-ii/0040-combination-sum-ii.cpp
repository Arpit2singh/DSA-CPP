class Solution {
public:
    void check(vector<int>&nums , vector<vector<int>>&v , vector<int>temp , int target , int idx ){
           if(target == 0){
            v.push_back(temp) ; 
            return ; 
        }
        if(target < 0 || idx >= nums.size()){
            return ; 
        } 
     
       
        // temp.push_back(nums[idx]) ; 
        // check(nums , v , temp , target-nums[idx] , idx) ;
        // temp.pop_back() ; 
        // check(nums , v , temp , target , idx+1) ;  
        for(int i = idx ; i<nums.size() ; i++){
         if(i>idx && nums[i] == nums[i-1]) continue ;
        temp.push_back(nums[i]) ; 
        check(nums , v , temp , target-nums[i] , i+1) ;
        temp.pop_back() ; 
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        sort(nums.begin() , nums.end()) ; 
        vector<int>temp ; 
        vector<vector<int>>v; 

        check(nums , v , temp , target , 0) ; 
        return v ; 
    }
};