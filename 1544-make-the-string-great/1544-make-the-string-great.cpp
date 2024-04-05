class Solution {
public:
    string makeGood(string s) {
        if (s.size()<=1){
            return s;
        }

        int i=0;
        while (i< s.size()-1){
            if (abs(s[i]-s[i+1])==32){
                s.erase(i,2);
                return makeGood(s);
            }
            i++;
        }
        return s;
    }
};