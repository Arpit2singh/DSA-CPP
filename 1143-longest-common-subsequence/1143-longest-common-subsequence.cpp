class Solution {
public:
    int check(string &text1 , string &text2 , vector<vector<int>>&dp , int i , int j){
        if(i >= text1.size() || j>= text2.size()) return 0 ; 
        if(dp[i][j] != -1) return dp[i][j] ; 

        if(text1[i] == text2[j]){
            return dp[i][j] = 1 + check(text1 , text2 , dp , i+1 , j+1) ;
        }
        return dp[i][j] = max(check(text1 , text2 , dp , i+1 , j) , check(text1 , text2 , dp , i , j+1)) ;
    }
    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>>dp(text1.size() , vector<int>(text2.size(), -1)) ; 
        int i = 0 ; 
        int j = 0 ; 
        return check(text1 , text2 , dp , i , j ); 
    }
};