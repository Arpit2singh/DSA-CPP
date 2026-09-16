class Solution {
    public List<Integer> majorityElement(int[] nums) {
        int count1 = 0 ; 
        int count2 = 0 ;
        int cand1 = -1 ; 
        int cand2 = -1 ; 
        for(int i = 0 ; i<nums.length ; i++){
              if(cand1 == nums[i]){
                count1++ ;
            }
            else if(cand2 == nums[i]){
                count2++ ; 
            }
           else if(count1==0){
                cand1 = nums[i] ; 
                count1 = 1 ; 
            }
            else if(count2 == 0 && cand1 != nums[i]){
                cand2 = nums[i];
                count2 = 1 ;
            }
           
            else {
                count1-- ;
                count2-- ;
            }
        }

        int c1 = 0 ;
        int c2 = 0 ; 

        for(int i = 0 ;i<nums.length ; i++){
            if(nums[i] == cand1){
                c1++ ; 
            }
            if(nums[i] == cand2){
                c2++ ; 
            }
        }
        int n = nums.length ; 
        ArrayList<Integer>v = new ArrayList<>() ; 

        if(c1 > n/3 && c2 > n/3 && cand1 != cand2){
            v.add(cand1) ; 
            v.add(cand2) ; 
            return v ; 
        }
         if(c1 > n/3){
            v.add(cand1) ; 
            return v ; 
        } 
         if(cand1 != cand2 && c2 > n/3){
            v.add(cand2) ; 
            return v ; 
        } 
      
        return v ; 
    }
}