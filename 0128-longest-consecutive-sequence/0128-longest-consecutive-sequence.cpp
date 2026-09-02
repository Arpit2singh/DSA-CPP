class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0 ; 
       unordered_set<int>st ; 

        for(int i = 0 ; i<nums.size() ; i++){
            st.insert(nums[i]) ; 
        }
        int maxi = 1 ; 

        for(auto elem : st){
            if(st.count(elem-1)) continue  ; 

            int count = 1 ; 
            int start = elem+1 ; 
            while(st.count(start)){
                start++ ; 
                count++ ; 
            }
            maxi = max(maxi , count) ; 
        }

        return maxi ;   
    }
};