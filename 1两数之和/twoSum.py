from typing  import List

class Solution:
    def twoSum(self,nums:List[int],target:int)->int:
        dict={}
        for index,num in enumerate(nums):
            it=target-num
            if it in dict:
                return [dict[it],index]
            
            dict[num]=index

solution=Solution()
ans=solution.twoSum([2,7,11,15],9)

if __name__=='__main__':
    print(ans)

            

            

        
        
