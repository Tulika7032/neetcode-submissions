class Solution {
public:
    int search(vector<int>& nums, int target) {
        for(int right=0;right<nums.size();right++){
            if(nums[right]==target){
                return right;
            }
        }
        return -1;
    }
};
