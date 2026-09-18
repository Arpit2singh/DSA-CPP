class Solution {
    void check(int[] nums , int idx , List<Integer>temp , List<List<Integer>>v){
        v.add(new ArrayList<>(temp)); 

        for(int i = idx ; i<nums.length ; i++){
            if(i>idx && nums[i] == nums[i-1]) continue ;
            temp.add(nums[i]); 
            check(nums , i + 1 , temp , v) ; 
            temp.remove(temp.size()-1) ; 
        }
    }
    public List<List<Integer>> subsetsWithDup(int[] nums) {
        Arrays.sort(nums) ; 
        List<List<Integer>>ans = new ArrayList<>() ; 
        List<Integer>temp = new ArrayList<>() ; 

        check(nums , 0 , temp , ans) ; 

        return ans ;
    }
}