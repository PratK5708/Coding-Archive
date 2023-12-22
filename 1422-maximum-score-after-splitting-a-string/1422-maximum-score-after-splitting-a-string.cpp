class Solution {
public:
    int maxScore(string s) {
        int right=0;
        int left=0;

        for (int i=0;i<s.length();i++){
            if (s[i]=='1'){
                 right++;
            }
        }

        int res=0;
        for (int i=0;i<s.length()-1;i++){
            if (s[i]=='0'){
                left++;
            }
            else{
                right--;
            }

            res=max(res,left+right);
        }

        return res;
    }

};