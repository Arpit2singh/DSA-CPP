class Solution {
public:
    int check(string &s , int i , int j , vector<vector<int>>&dp){
        if(i>=j){
            return 0 ; 
        }
        if(dp[i][j] != -1) return dp[i][j] ; 
        if(s[i] == s[j]) {
            return dp[i][j] = check(s , i+1 , j-1 , dp) ; 
        }
        return dp[i][j] = 1+min(check(s , i+1 , j , dp) , check(s , i , j-1 , dp)) ; 
    }
    int minInsertions(string s) {
        
        int i = 0 ; 
        int j = s.size()-1 ; 
        vector<vector<int>>dp(s.size()+1 , vector<int>(s.size()+1 , -1)) ; 
        return check(s , i , j , dp);
    }
};