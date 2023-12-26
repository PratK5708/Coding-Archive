class Solution {
public:
    int distinctSubseqII(string s) {
        int n = s.size();
        long long int mod = 1e9+7;
        vector<long>dp(n+1,0);
        dp[0]=1;
       
        unordered_map<char,int>mp;
        for(int i=1; i<=n; i++){
            char c = s[i-1];
            dp[i] = (2 * dp[i-1])%mod;
            if(mp.find(c)!=mp.end()){
                int j = mp[c];
                dp[i] = (dp[i] - dp[j-1])%mod;
            }
            mp[c] = i;
           
            
        }
        if(dp[n]<=0) dp[n] += mod;

        return dp[n]-1 ;
    }
};