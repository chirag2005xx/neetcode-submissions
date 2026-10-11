# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def lowestCommonAncestor(self, root: TreeNode, p: TreeNode, q: TreeNode) -> TreeNode:


        traverselistp=[]
        traverselistq=[]

        self.traverse(root,p,traverselistp)
        self.traverse(root,q,traverselistq)

        
        n=min(len(traverselistp),len(traverselistq))
        ans=None 

        for i in range(n):
            if traverselistp[i]!=traverselistq[i]:
                break
            ans=traverselistp[i]

        
        return ans
    
    

    def traverse(self,root,p,traverselist)->bool:

        if root is None:
            return 0
        
        traverselist.append(root)



        if root.val==p.val:
            return 1

        val1=self.traverse(root.left,p,traverselist)
        val2=self.traverse(root.right,p,traverselist)

        if val1==1 or val2==1:
            return 1
        else:
            traverselist.pop()
            return 0



        

        