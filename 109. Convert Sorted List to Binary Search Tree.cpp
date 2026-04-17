/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    ListNode* headPtr;
public:
    TreeNode* sortedListToBST(ListNode* head) {
        ListNode* temp = head;
        int size = 0;
        
        headPtr = head;

        while(temp){
            size += 1;
            temp = temp->next;
        }
        
        return bst(0, size - 1);
    }
    TreeNode* bst(int left, int right){
        if(left > right) return NULL;

        int mid = (left + right) / 2;
        TreeNode* left_tree = bst(left, mid - 1);

        TreeNode* new_node = new TreeNode(headPtr->val);
        headPtr = headPtr->next;

        new_node->left = left_tree;

        TreeNode* right_tree = bst(mid + 1, right);
        new_node->right = right_tree;

        return new_node;
    }

    
};