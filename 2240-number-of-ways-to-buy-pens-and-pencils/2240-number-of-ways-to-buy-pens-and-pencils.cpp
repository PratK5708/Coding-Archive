class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        // int res=0;
        long long res=0;
        
        int lim=total/cost1;
        for (int i=0;i<=lim;i++){
            int ra=total-i*cost1;
            res+=int(ra/cost2)+1;
        }
        return res;
    }
};