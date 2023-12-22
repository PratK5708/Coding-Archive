class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        // sort(words1.begin(),words1.end());
        // sort(words2.begin(),words2.end());
        // for(int )
//          unordered_map<string, int> frequencyMap;
//         for (const string& word : words1) {
//             frequencyMap[word]++;
//         }

//         for (const string& word : words2) {
//             frequencyMap[word]++;
//         }

//         int count = 0;
//         for (const auto& entry : frequencyMap) {
//             if (entry.second == 1) {
//                 count++;
//             }
//         }

//         return count;
        
        unordered_map<string, int> freq1, freq2; 
        for (auto& s : words1) ++freq1[s]; 
        for (auto& s : words2) ++freq2[s]; 
        int ans = 0; 
        for (auto& [s, v] : freq1) 
            if (v == 1 && freq2[s] == 1) ++ans; 
        return ans; 
    }
};