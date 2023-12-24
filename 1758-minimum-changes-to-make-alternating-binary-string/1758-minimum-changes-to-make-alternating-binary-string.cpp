class Solution {
public:
    int minOperations(string s) {
        int a=1,b=0, c=0,d=0;
        for (int i=0;i<s.length();i++) {
            c+=(s[i]-'0'!= a) ? 1 : 0;
            d+=(s[i]-'0'!=b) ? 1 : 0;
            b=(b == 1) ? 0 : 1;
            a=(a==1) ? 0 : 1;
        }
        return min(c, d);
    }
};