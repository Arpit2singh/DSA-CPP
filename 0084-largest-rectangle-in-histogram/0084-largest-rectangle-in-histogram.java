class Solution {
    public int largestRectangleArea(int[] nums) {
        Stack<Integer>st1 = new Stack<>() ; 
        Stack<Integer>st2 = new Stack<>() ; 
        ArrayList<Integer>left = new ArrayList<>() ; 
        ArrayList<Integer>right = new ArrayList<>() ; 

        for(int i = nums.length-1 ; i>=0 ; i--){
            while(!st1.isEmpty() && nums[st1.peek()] >= nums[i]){
                st1.pop() ; 
            }
            if(st1.isEmpty()){
                right.add(nums.length) ; 
            }
            else{
                right.add(st1.peek()) ; 
            }
            st1.push(i) ; 
        }

        Collections.reverse(right) ; 

           for(int i = 0 ; i<nums.length ; i++){
            while(!st2.isEmpty() && nums[st2.peek()] >= nums[i]){
                st2.pop() ; 
            }
            if(st2.isEmpty()){
                left.add(-1) ; 
            }
            else{
                left.add(st2.peek()) ; 
            }
            st2.push(i) ; 
        }

        // for(int i= 0 ; i<left.size() ; i++){
        //     System.out.println(right.get(i))  ;
        // } 
        // System.out.println("budfb")  ;
        //   for(int i= 0 ; i<left.size() ; i++){
        //     System.out.println(left.get(i))  ;
        // } 

        int maxi = Integer.MIN_VALUE ; 
        for(int i = 0 ; i<nums.length ; i++){
            maxi = Math.max(nums[i] * (right.get(i) - left.get(i) -1) , maxi) ; 
        }
        return maxi ; 
    }
}