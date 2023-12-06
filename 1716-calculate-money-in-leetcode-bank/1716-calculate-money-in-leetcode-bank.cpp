class Solution {
public:
    int totalMoney(int n) {
        int total = 0;
        int currentDay = 1;
        int currentMoney = 1;

        while (currentDay <= n) {
            total += currentMoney;
            currentMoney++;

            if (currentDay % 7 == 0) {
                currentMoney -= 6;
            }

            currentDay++;
        }

        return total;
    }
};