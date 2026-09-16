class Solution {
    public int subarraySum(int[] nums, int k) {
     Map<Integer,Integer>mp = new HashMap<>() ; 

     mp.put(0 , 1) ; 
     int prefix = 0 ; 
     int sum = 0 ; 
     for(int i = 0 ; i<nums.length ; i++){
        prefix += nums[i] ; 
        int comp = prefix - k ; 
        if(mp.containsKey(comp)){
            sum += mp.get(comp) ; 
        }
        if(mp.containsKey(prefix)){
        int temp = mp.get(prefix) ; 
        temp++ ; 
        mp.put(prefix , temp) ;
        }
        else{
            mp.put(prefix , 1) ; 
        }
     }
    return sum ;
    }
}