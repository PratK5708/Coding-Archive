class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int leng=g.size();
        int lens=s.size();
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int i=0,j=0, ans=0;
        
        while((i<leng) && (j<lens)){
            if (s[j]>=g[i]){
                ans++;
                i++;
            }
            j++;
        }
        return ans;
    }
};