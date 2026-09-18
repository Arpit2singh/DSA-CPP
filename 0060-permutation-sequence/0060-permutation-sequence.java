class Solution {
    int check(int n , int k){
    if(k == 0) {
            return n ;
    }
    String s  =  String.valueOf(n) ; 
    int[] nums = new int[s.length()] ; 
    for(int i = 0 ; i<s.length() ; i++){
        nums[i] = s.charAt(i) -'0' ; 
    }
    int pivot = -1 ; 
    for(int i = nums.length-1 ; i>= 1  ; i--){
        if(nums[i] > nums[i-1]){
            pivot = i-1 ;
            break ; 
        }
    }

    if(pivot == -1) {
        int ans = 0 ; 
        for(int i = nums.length-1 ; i>=0 ; i--){
            ans = (ans *10) + nums[i] ; 
         }
         return check(ans , k-1) ; 
    }

    for(int i = nums.length-1 ; i>pivot ; i--){
        if(nums[i] > nums[pivot]){
            int temp = nums[i] ; 
            nums[i] = nums[pivot] ; 
            nums[pivot] = temp ; 
            break ; 
        }
    }

    int left = pivot+1 ; 
    int right = nums.length-1  ; 
    // String ns = s.substring(left , right) ; 
    // char[] arr = s.toCharArray(ns) ; 
    // int left= 0 ; 
    // int right = arr.length-1 ; 
    while(left < right){
      int temp = nums[left] ; 
      nums[left] = nums[right] ; 
      nums[right] = temp ; 
      left++ ;
      right-- ;
    }

    // String pre = s.substring(0 , left+1) ;  
    // String post = new String(arr) ; 
    // int nnum = Integer.parseInt(pre+post) ; 123
    int ans = 0 ; 
    for(int i = 0 ; i<nums.length ; i++){
        ans = (ans *10) + nums[i] ; 
    }
    return check(ans , k-1)  ;

    }




    public String getPermutation(int n, int k) {
     String s = "" ; 
     for(int i=1 ; i<=n ; i++){
        s+=i ; 
     }
     int starter = Integer.parseInt(s) ; 
     int num = check(starter , k-1) ; 
     return  String.valueOf(num) ; 
    }
}