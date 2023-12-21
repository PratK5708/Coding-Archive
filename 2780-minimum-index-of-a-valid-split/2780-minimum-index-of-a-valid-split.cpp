class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> count;
        int dominantElement = -1;
        int dominantCount = 0;

        for (int i = 0; i < n; ++i) {
            count[nums[i]]++;
            if (count[nums[i]] > dominantCount) {
                dominantCount = count[nums[i]];
                dominantElement = nums[i];
            }
        }

        count.clear();
        int leftCount = 0;

        for (int i = 0; i < n - 1; ++i) {
            count[nums[i]]++;
            if (nums[i] == dominantElement) {
                leftCount++;
            }

            if (leftCount * 2 > i + 1 && (dominantCount - leftCount) * 2 > n - i - 1) {
                return i;
            }
        }

        return -1;
    }
};
