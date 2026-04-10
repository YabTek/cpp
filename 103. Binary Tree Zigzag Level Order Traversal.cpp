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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(!root) return {};

        vector<vector<int>> ans;
        queue<TreeNode*> queue;
        queue.push(root);
        bool turn_front = true;

        while(!queue.empty()){
            deque<int> temp;
            int size = queue.size();

            for (int i = 0; i < size; i++){
                TreeNode* node = queue.front();
                queue.pop();
                
                if(turn_front)
                    temp.push_back(node->val);
                else
                    temp.push_front(node->val);

                if (node->left) queue.push(node->left); 
                if (node->right) queue.push(node->right);
            }
            ans.push_back(vector<int>(temp.begin(), temp.end()));
            turn_front = !turn_front;
        }

        return ans;
        
    }
};