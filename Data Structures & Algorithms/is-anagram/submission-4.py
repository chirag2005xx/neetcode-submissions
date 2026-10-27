class Solution:
    def isAnagram(self, s: str, t: str) -> bool:


       d1={}
       d2={}

       for car in s:

        if car not in d1:
            d1[car]=1
        else:
            d1[car]+=1
        
       for car in t:
        if car not in d2:
            d2[car]=1
        else:
            d2[car]+=1
        

       if d1 == d2:
            return True
       else :
            return False

            
            
        