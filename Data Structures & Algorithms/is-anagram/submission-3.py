class Solution:
    def isAnagram(self, s: str, t: str) -> bool:


        dict1={}
        dict2={}


        n1=len(t)
        n2=len(s)
        if n1!=n2:
            return False

        for char in t:
            if char not in dict1:
                dict1[char]=1
            else:
                dict1[char]+=1
        for char in s:
            if char not in dict2:
                dict2[char]=1
            else:
                dict2[char]+=1


        for key in dict1:
            if key not in dict2 or  dict1[key]!=dict2[key]:
                return False
        

        return True

            
            
        