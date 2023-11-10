class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        
//         vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
//         vector<int> final;
//         if(adjacentPairs.length()==1){
//             return adjacentPairs[0];
//         }
//         final.pushback(adjacentPairs[0][0]);
//         final.pushback(adjacentPairs[0][1]);
        
//         for(int i=1;i<adjacentPairs.length();i++){
//                while(ad)
//         }
            
        if (adjacentPairs.size() == 1) {
            return adjacentPairs[0];
        }
        unordered_map<int, vector<int>> adjMap;


        for (const auto& pair : adjacentPairs) {
            adjMap[pair[0]].push_back(pair[1]);
            adjMap[pair[1]].push_back(pair[0]);
        }

        // Find the starting point
        int start;
        for (const auto& entry : adjMap) {
            if (entry.second.size() == 1) {
                start = entry.first;
                break;
            }
        }


        vector<int> result;
        unordered_set<int> visited;
        dfs(start, adjMap, result, visited);

        return result;
    }

    void dfs(int current, unordered_map<int, vector<int>>& adjMap, vector<int>& result, unordered_set<int>& visited) {
        result.push_back(current);
        visited.insert(current);

        for (int neighbor : adjMap[current]) {
            if (visited.find(neighbor) == visited.end()) {
                dfs(neighbor, adjMap, result, visited);
            }
        }
    }
};
