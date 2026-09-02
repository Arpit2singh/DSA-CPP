class Solution {
public:
    long double check(long double x , long long n){
        if(n == 0) return 1 ; 
        if(n == 1) return x ;
        if(n % 2 == 0){
           
        return  check(x*x , n/2) ;
        }
        
            return  x * check(x , n-1) ; 
         
    }
    long double myPow(long double x, long long n) {
        bool neg = false ; 
        if(n < 0){
         neg = true ; 
        }
       
        return neg ? (long double) check(1/x , -1*n) : (long double ) check(x , n) ; 

    }
};