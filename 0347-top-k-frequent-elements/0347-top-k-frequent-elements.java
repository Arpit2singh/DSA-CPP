class Solution {
    public int[] topKFrequent(int[] nums, int k) {
       Map<Integer,Integer>mp = new HashMap<>() ;
       PriorityQueue<int[]>pq = new PriorityQueue<>((a,b)->b[0]-a[0]) ;  
       for(int i = 0 ; i<nums.length ; i++){
          if(mp.containsKey(nums[i])){
            int temp = mp.get(nums[i]) ; 
            mp.put(nums[i] , ++temp) ;
          } 
          else{
            mp.put(nums[i] , 1) ; 
          }
       }

       for(Map.Entry<Integer , Integer>entry : mp.entrySet()){
          pq.add(new int[] {entry.getValue() , entry.getKey() } ) ;
       }

       int[]  arr = new int[k] ; 
        int i = k ; 
       while(k > 0){
        arr[i-k] = pq.poll()[1] ; 
        k-- ; 
       } 
       return arr ;
       
    }
}