# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:   
    def isSubtree(self, root: Optional[TreeNode], subRoot: Optional[TreeNode]) -> bool:

        if subRoot is None:
            return True
        
        return self.findcommonroot(root,subRoot)

    
    def findcommonroot(self,root,subRoot)->bool:
        if root is None:
            return False 


        if root.val==subRoot.val:
            if self.issametree(root,subRoot):
                return True

        
        val1=self.findcommonroot(root.left,subRoot)
        val2=self.findcommonroot(root.right,subRoot)


        if val1==1 or val2==1:
            return True

        else:
            return False 

    

    def issametree(self,root,subRoot)->bool:

        if root is None and subRoot is None:
            return True
        if root is None and subRoot is not None:
            return False
        if root is not None and subRoot is None:
            return False
        
        elif root.val!=subRoot.val:
            return False 
        
        val1=self.issametree(root.left,subRoot.left)
        val2=self.issametree(root.right,subRoot.right)

        if val1==1 and val2==1:
            return True


        

    


        