class Solution {
      void check(int[] nums , int idx , List<Integer>temp , int target , List<List<Integer>>v){
         if(target == 0){
             v.add(new ArrayList<>(temp)) ; 
             return ;
        }
        if(idx>= nums.length || target < 0) {
            return ; 
        }
       
        
        // temp.add(nums[idx]) ; 
        // check(nums , idx , temp , target - nums[idx], v) ; 
        // temp.remove(temp.size()-1) ; 
        // check(nums , idx+1 ,temp , target , v) ; 

        for(int i = idx ;i<nums.length ; i++){
            if(i>idx && nums[i] == nums[i-1]) continue ;
            temp.add(nums[i]) ; 
            check(nums , i+1 , temp , target-nums[i] , v) ; 
            temp.remove(temp.size()-1) ; 
        }
       
    }
    public List<List<Integer>> combinationSum2(int[] nums, int target) {
         List<List<Integer>>v = new ArrayList<>() ; 
        List<Integer>temp = new ArrayList<>() ; 
        Arrays.sort(nums) ; 
        check(nums , 0 , temp , target  , v) ; 

        return v ; 
    }
}