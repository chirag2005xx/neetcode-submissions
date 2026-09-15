class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector<int> answer(nums.size());

        unordered_map <int,int> left;
        unordered_map <int,int> right;
        int product=1;
        int product2=1;

        for(int i=0;i<nums.size();i++){
            left[i]=product;

            product*=nums[i];

            

        }
         for(int i=nums.size()-1;i>=0;i--){
            right[i]=product2;

            product2*=nums[i];

            

        }


        for(int i=0;i<nums.size();i++){
            answer[i]=left[i]*right[i];
        }


    
        

        return answer;

    }
};
