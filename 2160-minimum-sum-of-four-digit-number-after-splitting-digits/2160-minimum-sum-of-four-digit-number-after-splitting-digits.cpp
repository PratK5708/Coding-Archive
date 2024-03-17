class Solution {
public:
    int minimumSum(int num) {
//        vector<int> digits;
//         while (num>0){
//             digits.push_back(num%10);
//             num/=10;
//         }
//         while (digits.size()<4){
//             digits.push_back(0);
//         }

//         sort(digits.begin(), digits.end());
//         int new1=digits[0]*10+digits[1];
//         int new2=digits[2]* 10+digits[3];

//         return new1+new2;
        
        int d[4] = {};
        for (int i = 0; i < 4; ++i, num /= 10) d[i] = num % 10;
        sort(begin(d), end(d));
        return 10 * (d[0] + d[1]) + d[2] + d[3];
    }
};