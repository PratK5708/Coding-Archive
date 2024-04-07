class Solution {
public:
    int checkValidString(string s) {
//         int count=0;
//         int a=0,b=0;
//         for (int i=0;i<s.size();i++){
//             if (s[i]=='('){
//                 count++;
//             } 
            
//             else if (s[i]==')'){
//                 if (count){
//                     count--;
//                 } 
//                 else if (a){ 
//                     a--; 
//                     b++; 
//                 } 
//                 else if (b){
//                     b--;
//                 } 
//                 else{
//                     return count;
//                 }
//             } 
//             else {
//                 if (count){
//                     count--; 
//                     a++; 
//                 } 
//                 else {
//                     b++;
//                 }
//             }
//         }
//         return count;
        int cnt = 0, spent = 0, left = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                cnt++;
            } else if (s[i] == ')') {
                if (cnt)
                    cnt--;  // decrementing '(' char
                else if (spent) {
                    spent--;
                    left++;  // recovering '*' char
                } else if (left) {
                    left--;  // use left stars ('*')
                } else
                    return false;  // if cnt=0, spent=0, left=0
            } else {
                if (cnt) {
                    cnt--;
                    spent++;  // decrementing '(' char, increment '*'
                } else
                    left++;  // if cnt = 0, increment left stars
            }
        }
        return cnt == 0;
    }
};
