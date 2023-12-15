class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
//         if (s.length()!=t.length()){
//             return false;
//         }
//         sort(s.begin(),s.end());
//         sort(t.begin(),t.end());
        
        
//         for (int i=0;i<s.length();i++){
//             if (s[i]!=t[i]){
//                 return false;
//             }
//         }
        vector<vector<string>> result;
        
        if (strs.empty()) {
            return result;
        }
        
        map<string, vector<string>> anagramGroups;
        for (const string& s : strs) {
            string sortedStr = s;
            sort(sortedStr.begin(), sortedStr.end());
            anagramGroups[sortedStr].push_back(s);
        }

        for (auto it = anagramGroups.begin(); it != anagramGroups.end(); ++it) {
            result.push_back(it->second);
        }

        return result;
    }
};