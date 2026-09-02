class Solution {
public:
    void check(vector<int>&nums , vector<vector<int>>&v, int idx , vector<int>temp){
        v.push_back(temp) ; 

        for(int i = idx ; i<nums.size(); i++){
            if(i>idx && nums[i] == nums[i-1] ) continue ;
            temp.push_back(nums[i]) ; 
            check(nums , v , i+1 , temp) ; 
            temp.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin() , nums.end()) ; 
        vector<vector<int>>v ; 
        vector<int>temp  ;
        check(nums , v , 0 , temp ) ; 
        return v ;
    }
};