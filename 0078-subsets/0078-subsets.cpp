class Solution {
public:
    void check(vector<int>&nums , int idx , vector<vector<int>>&v , vector<int>temp) {
        v.push_back(temp) ; 

        for(int i = idx ; i<nums.size() ; i++){
            temp.push_back(nums[i]) ; 
            check(nums , i+1 , v , temp) ; 
            temp.pop_back() ; 
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>v ; 
        vector<int>temp ; 
        int idx = 0 ; 
        check(nums , idx , v , temp) ; 
        return v ; 
    }
};