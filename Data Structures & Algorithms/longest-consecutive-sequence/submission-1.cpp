class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int>map1;
        vector<int>ans;
        if(nums.empty()){
            return 0;
        }
        for(int x: nums){
            map1[x]++;
        }
        for(auto p: map1){
            ans.push_back(p.first);
        }
        sort(ans.begin(), ans.end());
        int left=0; int length=1; int longest_length=1;
        for(int right=1;right<ans.size();right++){
            if(ans[right]==ans[left]+1){
                length++;
                left++;
            }
            else{
                length=1;
                left=right;
            }
            longest_length=max(length, longest_length);
        }
        return longest_length;
    }
};
