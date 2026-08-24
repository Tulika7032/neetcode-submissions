class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.empty()){
            return 0;
        }
        unordered_map<char, int> map;
        int left=0;int maxlength=0;
        for(int right=0;right<s.size();right++){
            if(map.find(s[right])!=map.end()){
                left=max(left, map[s[right]]+1);
            }
            map[s[right]]=right;
            int length=right-left+1;
            maxlength=max(maxlength,length);  
        }
        return maxlength;
    }
};
