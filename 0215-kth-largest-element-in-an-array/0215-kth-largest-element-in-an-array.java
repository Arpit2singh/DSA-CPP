class Solution {
    public int findKthLargest(int[] nums, int k) {
        PriorityQueue<Integer>pq = new PriorityQueue<>(Collections.reverseOrder()) ; 
        for(int i = 0 ;i<nums.length ; i++){
            pq.add(nums[i]) ; 
        } 
        while(!pq.isEmpty() && k-- > 1){
            pq.poll() ; 
        }
        return pq.isEmpty() ? -1 : pq.peek() ; 
    }
}