class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0;
        int j=0;
        int maxlen=0;
        unordered_set<char> set1;
        while(j<s.size()){

            if(set1.count(s[j])==0){
                set1.insert(s[j]);
                
                maxlen=max(maxlen,j-i+1);
                j++;
            }
            else{
                set1.erase(s[i]);
                i++;
            }


        }

        return maxlen;
        
    }
};
