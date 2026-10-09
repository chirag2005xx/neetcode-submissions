class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:


        d={}

        for val in nums:
            if val not in d:
                d[val]=1
            else:
                d[val]+=1
        
        sorted_d=dict(sorted(d.items(),key=lambda x:x[1],reverse=True))

        count=k

        answer=[]

        for key,value in sorted_d.items():
            answer.append(key)
            count-=1
            if count==0:
                return answer
        
        return answer





        