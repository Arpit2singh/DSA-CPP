class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp ; 
        int left = 0 ; 
        int right = 0 ; 
        int maxi = 0 ; 
        while(right <s.size()){
            if(mp.find(s[right]) != mp.end()){
               maxi = max(maxi , right - left ) ; 
                cout<<maxi <<endl ; 
                while(left < mp[s[right]]){
                    mp.erase(s[left]) ; 
                    left++ ; 
                }
                left = mp[s[right]] + 1; 
            }
           
            mp[s[right]] = right ; 
            right++ ;
        }
      maxi = max(maxi , right - left ) ; 
        return maxi ; 
    }
};