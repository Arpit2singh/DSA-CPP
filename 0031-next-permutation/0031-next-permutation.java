class Solution {
    public void nextPermutation(int[] nums) {
        int pivot = 0 ; 
        for(int i = nums.length-1 ; i>=1 ; i--){
            if(nums[i] > nums[i-1]){
                pivot = i-1 ; 
                break ; 
            }
        }
        int i ; 
        for( i = nums.length-1 ; i>pivot ; i--){
            if(nums[i] > nums[pivot]){
                int temp = nums[i] ; 
                nums[i] = nums[pivot] ; 
                nums[pivot] = temp ; 

                break  ; 
            }
        }
        if(i == pivot) {
            Arrays.sort(nums) ; 
            return ;
        }
       
        int left = pivot+1  ;
        int right = nums.length-1 ; 

        while(left < right){
                int temp = nums[left] ; 
                nums[left] = nums[right] ; 
                nums[right] = temp ; 
                left++ ; 
                right-- ; 
        }
        return ;

    }
}