class Solution {
public:
    string check(string & s , int n){
        if(n == 0) return s ; 
         string ns = "" ;
         int count = 0 ; 
         char cand = s[0] ; 
        for(int i = 0 ; i<s.size() ; i++){
            if(cand == s[i]){
                count++ ; 
            }
            else{
                ns += to_string(count) ;
                ns += cand ;    
                cand = s[i] ; 
                count = 1 ; 
            }
        }
         ns += to_string(count) ;
         ns += cand ;    
        
        cout<<ns<<endl ;
        return check(ns ,n-1) ; 
    }
    string countAndSay(int n) {
        string s = "1" ; 
        return check(s , n-1);
    }
};