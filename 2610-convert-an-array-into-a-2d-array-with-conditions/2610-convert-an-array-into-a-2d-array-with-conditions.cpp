class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        int n =nums.size();
        vector<int> count(n+1);
        vector<vector<int>> res;
        for (int a : nums) {
            if (res.size() <= count[a])
                res.push_back({});
            res[count[a]++].push_back(a);
        }
        return res;
    }
};