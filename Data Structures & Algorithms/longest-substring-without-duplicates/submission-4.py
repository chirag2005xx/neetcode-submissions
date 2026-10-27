class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:

       d={}
       maxlen=0

       l=0
       for r in range(len(s)):
        if s[r] in d and d[s[r]]>=l:
            l=d[s[r]]+1
        d[s[r]]=r
        maxlen=max(maxlen,r-l+1)

       return maxlen

        
        