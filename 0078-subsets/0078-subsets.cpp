class Solution {
public:
    void check(vector<int>&nums , int idx , vector<int>temp ,  vector<vector<int>>&v){
        v.push_back(temp) ; 

        for(int i = idx ; i<nums.size() ; i++){
            temp.push_back(nums[i]) ; 
            check(nums , i+1 , temp , v) ; 
            temp.pop_back() ; 
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>v ; 
        vector<int>temp ; 
        check(nums , 0 , temp , v ) ; 

        return v ; 

    }
};