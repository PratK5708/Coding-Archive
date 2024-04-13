class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        vector dp (matrix[0].size(),0);
        int res=0;
        
        for (int i=0;i<matrix.size();i++){
            for (int j=0;j<matrix[0].size();j++){
                if (matrix[i][j]=='1'){
                    dp[j]++;
                    int len=dp[j];
                    int k=j;
                    
                    
                    
                    while(k>=0){
                        len=min(len,dp[k]);
                        res=max(res,len * (j-k+1));
                        k--;
                    }
                } 
                else{
                    dp[j]=0;
                }
            }
        } 
        return res;   
    }
};