// class Solution {
// public:
//     public int solve(String s, int i, int j){
//         if(i<0 || j==s.length()) return 0;
//         if(s.charAt(i) == s.charAt(j)) return solve(s, i-1, j+1) + 1;
//         else return 0;
//     }
//     public int countSubstrings(String s) {
//         int max = 0;
//         for(int i=0; i<s.length(); i++){
//             max += solve(s,i,i) + solve(s,i,i+1);
//         }
//         return max;
//     }
// };

class Solution {
public:
    
    bool ispalindrome(string k){
        
        int i=0;
        int j=k.size()-1;
       
        while(i<=j){
            if(k[i]!=k[j])return false;
            i++;
            j--;
        }
        
        return true;
    }
    
    int countSubstrings(string s) {
        
        int c=0;
        for(int i=0;i<s.size();i++){
            string h="";
            for(int j=i;j<s.size();j++){
                h+=s[j];
                
                if(ispalindrome(h)){
                    c++;
               } 
            }
        }
        
        return c;
        
    }
};