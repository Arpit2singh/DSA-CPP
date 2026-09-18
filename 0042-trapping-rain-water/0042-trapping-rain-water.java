class Solution {
    public int trap(int[] height) {

       int left = 0 ; 
       int right = height.length - 1; 
       int leftmax = -1 ; 
       int rightmax = -1 ; 
       int sum = 0 ; 
       while(left <= right){

        if(height[left] <= height[right]){
            if(height[left] >= leftmax){
                leftmax = height[left] ; 
            }
            else{
                sum += (leftmax - height[left]) ; 
            }
            left++; 
        }
        else{
            if(height[right] >= rightmax){
                rightmax = height[right] ; 
            }
            else{
                sum += (rightmax - height[right]) ; 
            }
            right-- ; 
        }
       }

       return sum ; 

    }
}