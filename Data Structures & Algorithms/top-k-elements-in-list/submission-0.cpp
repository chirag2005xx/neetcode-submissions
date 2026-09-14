class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int> arr;

        vector<int> answer;

        for(int x:nums){
            arr[x]++;
        }

       vector<pair<int,int>> vec(arr.begin(),arr.end());

       sort(vec.begin(),vec.end(),[](auto& a,auto& b){
        return a.second>b.second;
       });


       for(auto&[key,value]:vec){
        answer.push_back(key);
        k--;
        if(k==0){
            return answer;
        }
       }

       return answer;



        
    }
};
