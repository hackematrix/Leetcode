from typing import List
from typing import Optional

class TreeNode:
    def __init__(self,val=0,left=None,right=None):
        self.val=val
        self.left=left
        self.right=right

class Solution:
    def checkTree(self,root:Optional[TreeNode])->bool:
        if root.val==root.left.val+root.right.val:
            return True
        else:
            return False


if __name__=='__main__':
    root=TreeNode(5,TreeNode(3),TreeNode(1))
    solution=Solution()
    ans=solution.checkTree(root)
    print(ans)
