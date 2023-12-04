class Solution {
public:
    string largestGoodInteger(string num) {
        int n = num.length();
        string maxGoodInteger = "";

        for (int i = 0; i <= n - 3; i++) {
            if (num[i] == num[i + 1] && num[i + 1] == num[i + 2]){
                maxGoodInteger = max(maxGoodInteger, num.substr(i, 3));
            }
        }

        return maxGoodInteger;
    }
};