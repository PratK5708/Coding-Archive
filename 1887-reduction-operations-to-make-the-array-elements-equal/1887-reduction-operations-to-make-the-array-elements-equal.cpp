class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        int freq[50001] = {0}; // Initialize the array with zeros

        // Count the frequency of each element in nums
        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }

        int res = 0;
        int operations = 0;

        // Iterate from the largest possible value (50000) to 1
        for (int i = 50000; i >= 1; i--) {
            if (freq[i] > 0) {
                // Add the frequency of the current value to the total operations
                operations += freq[i];

                // Add the cumulative operations to the result
                res += operations - freq[i];
            }
        }

        return res;
    }
};




// class Solution {
// public:
//     int reductionOperations(int[] nums) {
//         int n = nums.length;
//         int[] freq = new int[50001];
//         for (int i = 0; i < n; i++) {
//             freq[nums[i]]++;
//         }
//         int res = 0;
//         int operations = 0;
//         for (int i = 50000; i >= 1; i--) {
//             if (freq[i] > 0) {
//                 operations += freq[i];
//                 res += operations - freq[i];
//             }
//         }

//         return res;
//     }
// };
