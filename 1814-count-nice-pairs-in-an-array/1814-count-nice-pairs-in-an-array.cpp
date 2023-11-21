// // class Solution {
// // public:
    
// //     int countNicePairs(vector<int>& nums) {
// //         int res = 0, mod = 1e9 + 7;
// //         unordered_map<int, int> count;
// //         return res;
// //     }
// //     int rev(int x) {
// //         int b = 0;
// //         while (a > 0) {
// //             b = b * 10 + (a % 10);
// //             a /= 10;
// //         }
// //         return b;
// //     }
// // };

// class Solution {
// public:
//     int countNicePairs(vector<int>& nums) {
//         int res = 0, mod = 1e9 + 7;
//         unordered_map<int, int> count;
//         for (int& a : nums) // Corrected variable name from A to nums
//             res = (res + count[a - rev(a)]) % mod;
//         return res;
//     }

//     int rev(int x) {
//         int b = 0;
//         while (x > 0) { // Corrected variable name from a to x
//             b = b * 10 + (x % 10);
//             x /= 10;
//         }
//         return b;
//     }
// };


class Solution {
    int reverseDigits(int num)
    {
        int rev_num = 0;
        while (num > 0)
        {
            rev_num = rev_num*10 + num%10;
            num = num/10;
        }
        return rev_num;
    }
public:
    int countNicePairs(vector<int>& nums) {
        unordered_map<int, int> mp;
        int sum = 0, mod = 1e9 + 7;
        for (auto num : nums) {
            int diff = num - reverseDigits(num);
            sum = (mp[diff] % mod + sum % mod) % mod;
            mp[diff]++;
        }
        return sum;
    }
};
