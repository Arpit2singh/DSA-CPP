class Solution {
    public void setZeroes(int[][] matrix) {
        boolean row = false ; 
        boolean col = false ; 
        int m = matrix.length ;
        int n = matrix[0].length ;

        for(int i = 0 ; i<m ; i++){
            if(matrix[i][0] == 0) row = true ; 
            for(int j = 0 ; j<n ; j++){
                if(matrix[0][j] == 0) col = true ; 
            }
        }

        for(int i = 1 ; i<m ; i++){
            for(int j = 1 ; j<n ; j++){
                if(matrix[i][j] == 0){
                    matrix[i][0] = 0 ; 
                    matrix[0][j] = 0 ; 
                }
            }
        }

        for(int i = m-1 ; i>=0 ; i--){
            for(int j = n-1 ; j>= 0 ; j--){
                if(matrix[i][0] == 0 || matrix[0][j] == 0){
                    matrix[i][j] = 0 ; 
                }
            }
        }

        if(row){
            for(int i = 0 ; i<m ; i++){
                matrix[i][0] = 0 ; 
            }
        }

        if(col){
            for(int j = 0 ; j<n ; j++){
                matrix[0][j] = 0 ; 
            }
        }

    }
}