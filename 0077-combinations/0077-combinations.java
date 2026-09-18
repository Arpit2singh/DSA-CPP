class Solution {
    void check(List<Integer>nums , int idx , List<Integer>temp , List<List<Integer>> v , int k ){
        if(idx >= nums.size()) return ; 
        if(temp.size() == k){
            v.add(new ArrayList<>(temp)) ; 
            return ; 
        }
        temp.add(nums.get(idx)) ; 
        check(nums , idx + 1 , temp , v , k) ; 
        temp.remove(temp.size()-1) ; 
        check(nums , idx +1  , temp , v , k ) ; 
    }
    public List<List<Integer>> combine(int n, int k) {
        List<List<Integer>>v = new ArrayList<>() ; 
        List<Integer>temp = new ArrayList<>() ; 
        List<Integer>nums = new ArrayList<>() ; 
        for(int i = 1 ; i<=n+1 ; i++){
            nums.add(i) ; 
        }

        check(nums , 0 , temp , v , k) ; 
        return v ; 
    }
}