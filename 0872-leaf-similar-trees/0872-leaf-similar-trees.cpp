/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        // int arr1[200];
        // int arr2[200];
        // ThreeNode* curr1;
        // ThreeNode* curr2;
        
//         while(root1!=nullptr){
//             if(root1->left==nullptr){
//                 arr1.[root1.size()-3](root1->left->val);
//                 root1=root1->right;
//             }
//             else{
//                 root1=root1->left;
//             }
//         }
            
        vector<int> arr1;
        vector<int> arr2;

        stack<TreeNode*> stack1;
        stack<TreeNode*> stack2;

        while (root1 || !stack1.empty() || root2 || !stack2.empty()) {
            while (root1) {
                if (root1->left == nullptr && root1->right == nullptr) {
                    arr1.push_back(root1->val);
                }
                stack1.push(root1);
                root1 = root1->left;
            }

            while (root2) {
                if (root2->left == nullptr && root2->right == nullptr) {
                    arr2.push_back(root2->val);
                }
                stack2.push(root2);
                root2 = root2->left;
            }

            if (!stack1.empty()) {
                root1 = stack1.top();
                stack1.pop();
                root1 = root1->right;
            }

            if (!stack2.empty()) {
                root2 = stack2.top();
                stack2.pop();
                root2 = root2->right;
            }
        }

        return arr1 == arr2;
            
        
    }
};