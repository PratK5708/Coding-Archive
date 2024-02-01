class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        // sort(nums.begin(),nums.end());
        // an array final =[]
        //     add nums first elemnt to final
        // for(int i=1;i<nums.size();i++){
        //     if (i[i]-i[i-1])<=k{
        //         add it to array, 
        //         else add it to a new array and append in final
        //     }
//         sort(nums.begin(),nums.end());

//         vector<vector<int>> f;
//         vector<int> Ca;
//         Ca.push_back(nums[0]);

//         for (int i=1;i<nums.size();i++){
//             if (nums[i]-Ca.back() <=k){
//                 Ca.push_back(nums[i]);
//             } 
//             else{
//                 f.push_back(Ca);
//                 Ca.clear();
//                 Ca.push_back(nums[i]);
//             }
//         }

//         f.push_back(Ca);

//         return f;
//         sort(nums.begin(), nums.end());

//         vector<vector<int>> final;
//         vector<int> currentArray;
//         currentArray.push_back(nums[0]);

//         for (int i = 1; i < nums.size(); i++) {
//             if (nums[i] - currentArray.back() <= k && currentArray.size() < 3) {
//                 currentArray.push_back(nums[i]);
//             } else {
//                 final.push_back(currentArray);
//                 currentArray.clear();
//                 currentArray.push_back(nums[i]);
//             }
//         }

//         // Check if there is any remaining subarray
//         if (!currentArray.empty()) {
//             final.push_back(currentArray);
//         }

//         return final;
        
//     }
         vector<vector<int>> res;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 2; i += 3) {
            if (nums[i + 2] - nums[i] <= k) {
                res.push_back({nums[i], nums[i + 1], nums[i + 2]});
            } else {
                return {};
            }
        }

        return res;
    }
    
};