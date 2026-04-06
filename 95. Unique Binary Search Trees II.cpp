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
    vector<TreeNode*> tree(int first, int last){
        if(first > last) return {nullptr};

        vector<TreeNode*> ans;

        for(int root = first; root <= last; root++){
            vector<TreeNode*> left = tree(first, root - 1);
            vector<TreeNode*> right = tree(root + 1, last);

            for(TreeNode* i : left){
                for (TreeNode* j : right){
                    TreeNode* new_node = new TreeNode(root);
                    new_node->left = i;
                    new_node->right = j;
                    ans.push_back(new_node);
                }
            }
        }
        return ans;
    }
    vector<TreeNode*> generateTrees(int n) {
        return tree(1, n);
        
    }
};