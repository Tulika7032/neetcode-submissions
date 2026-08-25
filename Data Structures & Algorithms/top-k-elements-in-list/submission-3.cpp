class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        unordered_map<int, int>map1;
        for(int x: nums){
            map1[x]++;
        }
        for(auto p: map1){
            ans.push_back(p.first);
        }

         sort(ans.begin(), ans.end(), [&](int a, int b){
            return map1[a] > map1[b];
        });

        ans.resize(k);

        return ans;
    }
};
