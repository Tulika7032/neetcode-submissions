class Solution {
public:
    bool isPalindrome(string s) {
        string same=""; string reverse="";
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i]))
                same=same+(char)tolower(s[i]);
        }
        for(int i=s.size()-1;i>=0;i--){
            if(isalnum(s[i]))
                reverse=reverse+(char)tolower(s[i]);
        }
        if(same==reverse){
            return true;
        }
        return false;
    }
};
