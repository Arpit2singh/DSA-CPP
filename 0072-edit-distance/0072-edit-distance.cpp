class Solution {
public:
    int check(string &word1 , string&word2 , vector<vector<int>>&dp , int i , int j){
        if(i>=word1.size()) return word2.size()-j ;  
        if(j>=word2.size()) return word1.size()-i ; 

        if(dp[i][j] != -1) return dp[i][j] ; 
        if(word1[i] == word2[j]){
            return dp[i][j]=check(word1 , word2 , dp , i+1 , j+1) ; 
        }
        return dp[i][j] = 1 + min({check(word1 , word2 , dp , i+1 , j) , check(word1 , word2 , dp, i , j+1) , check(word1 , word2 , dp , i+1 , j+1)}) ;  
    }
    int minDistance(string word1, string word2) {
        vector<vector<int>>dp(word1.size() , vector<int>(word2.size() , -1)) ; 
        return check(word1 , word2 , dp , 0 , 0) ; 
    }
};