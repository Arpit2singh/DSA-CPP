class Solution {
public:
    bool check(int &left , int &right , string &s){
        if(left < 0 || right>=s.size()) return true ; 
        if(left >= 0 && right<s.size() && s[left] == s[right]){
            left-- ; 
            right++ ; 
            return check(left, right , s) ; 
        }
        return true ; 
    } 
    string longestPalindrome(string s) {
        string maxi = "" ; 
        for(int i = 0 ; i<s.size() ; i++){
            int left = i ; 
            int right = i ; 
            if(check(left , right , s)){
                string ns = s.substr(left+1 , right-left-1) ; 
               if(maxi.size() <= ns.size()){
                  maxi = ns ; 
               }
            }
        }

         for(int i = 0 ; i<s.size() ; i++){
            int left = i ; 
            int right = i+1 ; 
            if(check(left , right , s)){
                string ns = s.substr(left+1 , right-left-1) ; 
               if(maxi.size() <= ns.size()){
                  maxi = ns ; 
               }
            }
        }
    return maxi ; 
        
    }
};