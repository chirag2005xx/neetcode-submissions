class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:

        d={}

        left=0
        maxlen=0

        for rit in range(len(s)):
            if s[rit] in d and d[s[rit]]>=left:
                left=d[s[rit]]+1
            d[s[rit]]=rit
            maxlen=max(maxlen,rit-left+1)
        
        return maxlen
        
        