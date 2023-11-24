class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int n=piles.size()/3; 
        int result=0;
        sort(piles.begin(),piles.end(),greater<int>());
        
        
        
        for (int i=1;i<=n;++i){
            result+=piles[i*2-1];
        }

        return result;
    }
};