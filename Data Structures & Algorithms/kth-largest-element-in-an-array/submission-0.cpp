class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>>pq;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }
        int n=pq.size();
        for(int i=0;i<n-k;i++){
            pq.pop();
        }
        return pq.top();
    }
};
