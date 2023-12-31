class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int count=-1;
        for(int i=0; i<s.size();i++){
            //string res=s[i];
            for(int j=i+1; j<s.size();j++){
                
                if (s[i]==s[j]){
                    count=max(count,j-i-1);
                              
                }
                      
            }
        }
        
   return count;
    }
};