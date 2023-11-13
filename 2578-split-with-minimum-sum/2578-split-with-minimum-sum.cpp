class Solution {
public:
    int splitNum(int num) {
    int numbers[10] = {0};
        while (num > 0) {
            numbers[num % 10]++;
            num /= 10;
        }
        int n1 = 0, n2 = 0;
        bool odd = true;
        for (int i = 0; i < 10; i++) {
            while (numbers[i] > 0) {
                if (odd) {
                    n1 = n1 * 10 + i;
                } 
                else {
                    n2 = n2 * 10 + i;
                }
                numbers[i]--;
                odd = !odd;
            }
        }
        return n1 + n2;
        }
};