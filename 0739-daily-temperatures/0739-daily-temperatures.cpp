class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        int len=t.size();
        int pos=0;
        int s[250];
        s[pos]=len-1;
        vector<int> res(len);
        for (int i=(len-2),n;i>=0;i--){
            n=t[i];
            while (pos>=0 && n>=t[s[pos]]){
                pos--;
            }
            if (pos>-1){
                res[i]=s[pos]-i;
            }
            s[++pos]=i;
        }
        return res;
    }
};