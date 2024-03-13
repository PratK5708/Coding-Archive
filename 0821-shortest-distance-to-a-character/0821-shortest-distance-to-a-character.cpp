class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> a;
        vector<int> b;
        for(int i=0;i<s.length();i++){
            if(s[i]==c){
                a.push_back(i);
            }
        }
        for(int i=0;i<s.length();i++){
            int m=10000;
            for(int j=0;j<a.size();j++){
                m=min(m,abs(i-a[j]));
            }
            b.push_back(m);

        }
        return b;
    }
};