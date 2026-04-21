# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sumOfLeftLeaves(self, root: Optional[TreeNode]) -> int:

        def traverse(node, flag):
            nonlocal ans

            if not node:
                return 
            if flag == "left" and not node.left and not node.right:
                ans += node.val
                
            traverse(node.left, "left")
            traverse(node.right, "right")

        ans = 0
        traverse(root, None)

        return ans



        