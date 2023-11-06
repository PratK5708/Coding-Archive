class Solution {
public:
    int mySqrt(int x) {
        if (x==0){
            return 0;
        }
    
        long r=x,l=1,m=0,res=0;
            while (l <= r) {
            m = l + (r - l) / 2;

            if (m * m == x) {
                return m;
            } else if (m * m > x) {
                r = m - 1;
            } else {
                l = m + 1;
                res = m;
            }
        }
//         while (l<=1){
//             m=l+(r-l)/2;

//             if (m*m==x){
//                 return m;
//             } 
//             else if (m*m>x){
//                 r=m-1;
//             } 
//             else{
//                 l=m+1;
//                 res=m;
//             }
//         }

//         if (res==0 && x<1){
//             res=1;
//         }
        return res;
    }
};