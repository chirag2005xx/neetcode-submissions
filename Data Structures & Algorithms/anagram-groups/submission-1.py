class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:

        d={}


        for val in strs:
            result="".join(sorted(val))
            if result not in d:
                d[result]=[]
            d[result].append(val)
        
        answer=[]
        for key,val in d.items():
            answer.append(val)

        return answer



    


    
        