class Solution {
    void check(int[] nums , int idx , List<Integer>temp , int target , List<List<Integer>>v){
        if(idx>= nums.length || target < 0) {
            return ; 
        }
        if(target == 0){
             v.add(new ArrayList<>(temp)) ; 
             return ;
        }
        
        temp.add(nums[idx]) ; 
        check(nums , idx , temp , target - nums[idx], v) ; 
        temp.remove(temp.size()-1) ; 
        check(nums , idx+1 ,temp , target , v) ; 
       
    }
    public List<List<Integer>> combinationSum(int[] nums, int target) {
        List<List<Integer>>v = new ArrayList<>() ; 
        List<Integer>temp = new ArrayList<>() ; 

        check(nums , 0 , temp , target  , v) ; 

        return v ; 
    }
}