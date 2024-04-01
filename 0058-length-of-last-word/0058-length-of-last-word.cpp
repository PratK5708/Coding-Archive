class Solution {
public:
    int lengthOfLastWord(string s) {
        // sort(s.begin(),s.end());
//         int store=0;
//         int count=0;
//         for(int i=0;i<s.length();i++){
//             if(s[i]==' '){
//                 store=count;
//                 count=0;
                
//             }
//             else{
//                 if(count>store){
//                     store=count;
                    
//                 }
//                 count++;
//             }
//         }
//         return store;
        
        int length=0;
        int i=s.length()-1;
        while (i>=0 && s[i]==' '){
            i--;
        }
        
        while (i>= 0 && s[i]!=' ') {
            length++;
            i--;
        }
        
        return length;
    }
};