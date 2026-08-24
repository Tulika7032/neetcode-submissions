class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int>map1;
        for(int x: nums){
            map1[x]++;
        }
        for (auto p: map1){
            if(p.second>1){
                return true;
            }
        }
        return false;
    }
};