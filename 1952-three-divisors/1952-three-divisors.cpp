class Solution {
public:
    bool isThree(int n) {
        int div = 2; 
        
        for(auto d = 2; d <n; d++) {
            if(n%d == 0) div++;
            
            if(div > 3) return false;
        }
        
        return div==3;
    }
};