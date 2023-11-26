class Solution {
public:
    vector<int> findMode(TreeNode* root) {
        vector<int> result;
        unordered_map<int, int> freqMap;
        int maxFreq = 0;

        function<void(TreeNode*)> inOrderTraversal = [&](TreeNode* node) {
            if (node) {
                inOrderTraversal(node->left);

                ++freqMap[node->val];
                maxFreq = max(maxFreq, freqMap[node->val]);

                inOrderTraversal(node->right);
            }
        };

        inOrderTraversal(root);

        for (const auto& entry : freqMap) {
            if (entry.second == maxFreq) {
                result.push_back(entry.first);
            }
        }

        return result;
    }
};


// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
//     vector<int> findMode(TreeNode* root) {
//         vector<int> result;
//         unordered_map<int, int> freqMap;
//         int maxFreq = 0;

//         auto inOrderTraversal = [&](TreeNode* node) {
//             if (node) {
//                 inOrderTraversal(node->left);

//                 freqMap[node->val]++;
//                 maxFreq = max(maxFreq, freqMap[node->val]);

//                 inOrderTraversal(node->right);
//             }
//         };
