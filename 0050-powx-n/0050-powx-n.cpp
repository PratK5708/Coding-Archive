class Solution {
public:
    double myPow(double x, int n) { 
//         if (n==0){
//             return 1;
//         }

//         if (n<0){
//             x=1/x;
//             n=-n;
//         }

//         double result=1;
//         for (int i=0;i<n;++i){
//             result*=x;
//         }

//         return result;
        
        if (n==0) return 1;
     return myPow(x*x,n/2)*(n%2==0?1:n>0?x:1/x);
    }
};