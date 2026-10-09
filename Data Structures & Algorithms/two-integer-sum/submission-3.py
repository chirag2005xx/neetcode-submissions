class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:

        d={}
        

        for i,val in enumerate(nums):

            needed=target-val

            if needed in d:
                return  [d[needed],i]
            
            d[val]=i

