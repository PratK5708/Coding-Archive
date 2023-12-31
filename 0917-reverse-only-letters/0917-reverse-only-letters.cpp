class Solution {
public:
    string reverseOnlyLetters(string s) {
        int start = 0, end = s.size()-1;
        while (start < end) {
            while (start < end && !isalpha(s[start])) start++;
            while (start < end && !isalpha(s[end])) end--;
            swap(s[start++], s[end--]);
        }
        return s;
    }
};
// class Solution {
// public:
//     string reverseOnlyLetters(string s) {
//         int l=0, r=s.size()-1;
//         while (l<r){
//             while ((l<r) && (!isalpha(s[l]))){
//                 ++l;
//             }
//             while ((l<r) && (!isalpha(s[r]))){
//                 --r;
//                 swap(s[l++],s[r--]);
//             }
            
//         }
//         return s;
//     }
// };