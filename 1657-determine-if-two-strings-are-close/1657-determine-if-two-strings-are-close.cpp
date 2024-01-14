class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size()){
            return false;
        }
        unordered_map<int,int>mp1,mp2;
        vector<int>s1,s2;
        for(int i=0; i<word1.size(); i++){
            mp1[word1[i]]++;
            mp2[word2[i]]++;
        }
        for(auto m : mp1){
            s1.push_back(m.second);
        }

        for(auto m : mp2){
            if(mp1.find(m.first)==mp1.end()) {
                return false;
            }
            s2.push_back(m.second);
        }
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        
        return s1==s2;
    }
};