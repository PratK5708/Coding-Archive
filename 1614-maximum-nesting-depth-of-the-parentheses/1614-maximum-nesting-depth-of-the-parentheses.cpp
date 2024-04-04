class Solution {
public:
    int maxDepth(string s) {
        int maxp=0;
        int temp=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                temp++;
                maxp=max(maxp,temp);
            }
            else if(s[i]==')'){
                temp--;
            }
        }
    return maxp;
    }
};