class Solution {
    public int maxProfit(int[] prices) {
        int mini = Integer.MAX_VALUE ; 
        int maxi = 0 ; 
        for(int i = 0 ; i<prices.length ; i++){
            mini = Math.min(prices[i] , mini) ; 
            maxi = Math.max(maxi , prices[i] - mini) ; 
        }
        return maxi ;
    }
}