// class Solution {
// public:
//     string oddString(vector<string>& words) {
// //         int n = words[0].size();

// //         vector<int> expectedDiff(n-1);
// //         for (int i = 0; i < n - 1; ++i) {
// //             expectedDiff[i] = words[0][i + 1] - words[0][i];
// //         }

// //         for (int j = 1; j < words.size(); ++j) {
// //             vector<int> currentDiff(n - 1);
// //             for (int i = 0; i < n - 1; ++i) {
// //                 currentDiff[i] = words[j][i + 1] - words[j][i];
// //             }

// //             if (currentDiff != expectedDiff) {
// //                 return words[j];
// //             }
// //         }

// //         return "";
        
//     }
// };

class Solution {
public:
    vector<int> score(string x)
    {
        vector<int> p;
        for(int i=1; i<x.size(); i++) p.push_back((x[i]-'a')-(x[i-1]-'a'));
        return p;
    }
    
    
    string oddString(vector<string>& words) {
        
        for(int i=1; i<words.size()-1; i++)
            if(score(words[i])!=score(words[i+1]) && score(words[i])!=score(words[i-1])) return words[i];
        
        if(score(words[0])!=score(words[1])) return words[0];
        return words[words.size()-1];
            
    }
	
};