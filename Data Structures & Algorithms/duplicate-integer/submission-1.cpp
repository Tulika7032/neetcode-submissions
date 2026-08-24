class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int>map;
        for(int x:nums){
            map[x]++;
        }
        for(auto p:map){
            if(p.second>1){
                return true;
            }
        }
        return false;
        
    }
};