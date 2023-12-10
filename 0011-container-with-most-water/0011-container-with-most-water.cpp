// class Solution {
// public:
//     int maxArea(vector<vector<int>>& grid) {
//         int m = grid.size();
//         int n = grid[0].size();
//         int maxGold = 0;

//         for (int i = 0; i < m; ++i) {
//             for (int j = 0; j < n; ++j) {
//                 if (grid[i][j] > 0) {
//                     int currentGold = dfs(grid, i, j);
//                     maxGold = max(maxGold, currentGold);
//                 }
//             }
//         }

//         return maxGold;
//     }
// };

class Solution {
public:
    int maxArea(vector<int>& height) {
    int water = 0;
    int i = 0, j = height.size() - 1;
    while (i < j) {
        int h = min(height[i], height[j]);
        water = max(water, (j - i) * h);
        while (height[i] <= h && i < j) i++;
        while (height[j] <= h && i < j) j--;
    }
    return water;
}
};