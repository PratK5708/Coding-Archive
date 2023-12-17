class Solution {
public:
    vector<string> getFolderNames(vector<string>& names) {
//         sort(names.begin(),names.end());
//         nums=0;
//         for (int i=1;i<names.length();i++){
//             if(names[i-1]==names[i]){
                
//                 names[i]=names[i]+"(
//             }
//         }
        //Dec'2023 - 1
        unordered_map<string, int> seen;
        vector<string> result;

        for (int i = 0; i < names.size(); i++) {
            if (seen.find(names[i]) == seen.end()) { 
                seen[names[i]] = 1;
                result.push_back(names[i]);
            } else {
                int k = seen[names[i]];
                string newName;
                do {
                    newName = names[i] + "(" + to_string(k++) + ")";
                } while (seen.find(newName) != seen.end());

                seen[names[i]] = k;
                seen[newName] = 1;
                result.push_back(newName);
            }
        }

        return result;
    }
};