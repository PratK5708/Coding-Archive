class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        if(n==1){
            return 1;
        
        }
        
        
        int i=0,j=0;
        while (j<n){
            char v=chars[j];
            int count=0;
            while(j<n && chars[j]==v){
                j++;
                count++;
            }
            chars[i++]=v;
            if(count>1){
                string str=to_string(count);
                for(int k=0;k<str.size();k++){
                    chars[i++]=str[k];
                }
            }
        }
        return i;
    }
};