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
    int maxAncestorDiff(TreeNode* root) {
//          if (root==nullptr){ 
//             return 0; 
//          }
        
//         stack<TreeNode*> s;
//         s.push(root);
//         TreeNode* p;
        
//         while (s.empty()!=NULL){
//             p= s.top();
//             s.pop();
//             if (p->right!=nullptr){
//                 s.push(p->right);
//             }

//             if (p->left !=nullptr){
//                 s.push(p->left);
//             }
//         }

//         return 0;
        if (root == nullptr) {
            return 0;
        }

        int maxDiff = 0;
        stack<pair<TreeNode*, pair<int, int>>> s;

        s.push({root, {root->val, root->val}});

        while (!s.empty()) {
            auto current = s.top();
            s.pop();

            TreeNode* node = current.first;
            int minValue = current.second.first;
            int maxValue = current.second.second;

            maxDiff = max(maxDiff, max(abs(node->val - minValue), abs(node->val - maxValue)));

            if (node->left != nullptr) {
                s.push({node->left, {min(minValue, node->left->val), max(maxValue, node->left->val)}});
            }

            if (node->right != nullptr) {
                s.push({node->right, {min(minValue, node->right->val), max(maxValue, node->right->val)}});
            }
        }

        return maxDiff;
    }
};