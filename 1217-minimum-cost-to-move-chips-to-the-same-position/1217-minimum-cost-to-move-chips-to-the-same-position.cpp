class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int evenCount=0;
        int oddCount=0;

        for (int i = 0; i < position.size(); ++i) {
            int chip = position[i];
            if (chip % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
        }

        return std::min(evenCount, oddCount);
    }
};
