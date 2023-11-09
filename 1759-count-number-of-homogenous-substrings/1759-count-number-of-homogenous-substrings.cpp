class Solution {
public:
    int countHomogenous(string s) {
        long long mod=1e9+7;
        long long count=1;
        long long final=0;
        for (int i=1;i<s.length();i++){
            if(s[i]==s[i-1]){
                count++;
            }
            else{
                final+=((count*(count+1))/2) % mod;
                count=1;
            }
        }
        final+=((count *(count+1))/2) % mod;
        return final;
    }
    
};