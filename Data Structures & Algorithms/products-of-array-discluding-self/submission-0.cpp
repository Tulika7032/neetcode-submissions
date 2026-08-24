class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        for(int i=0;i<nums.size();i++){
            int mul=1;
            for(int j=0;j<nums.size();j++){
                if(i!=j){
                    mul=mul*nums[j];
                }
            }
            ans[i]=mul;

        }
        return ans;
    }
};
