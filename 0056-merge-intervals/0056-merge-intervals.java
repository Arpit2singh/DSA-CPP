class Solution {
    public int[][] merge(int[][] intervals) {
        Arrays.sort(intervals , (a,b) -> a[0] - b[0]) ; 
        
        ArrayList<int[]> v = new ArrayList<>() ; 
        v.add(intervals[0]) ; 
        for(int i = 1 ; i<intervals.length ; i++){
            if(v.get(v.size()-1)[1] >= intervals[i][0] && v.get(v.size()-1)[1] <=intervals[i][1] ){
                v.get(v.size()-1)[1] = intervals[i][1] ; 
            }
            else if(v.get(v.size()-1)[1] > intervals[i][1]){
                continue ;
            }
            else{
                v.add(intervals[i]) ; 
            }
        }

        return v.toArray(new int[0][]) ; 
    }
}