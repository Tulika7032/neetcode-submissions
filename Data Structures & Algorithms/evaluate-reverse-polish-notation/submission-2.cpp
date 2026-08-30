class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        int output=0;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]!="+"&& tokens[i]!="-"&& tokens[i]!="*" && tokens[i]!="/"){
                st.push(stoi(tokens[i]));
            }
            else{
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                if(tokens[i]=="+"){
                    int c=a+b;
                    st.push(c);
                }
                else if(tokens[i]=="-"){
                    int c=b-a;
                    st.push(c);
                }
                else if(tokens[i]=="*"){
                    int c=a*b;
                    st.push(c);
                }
                else if(tokens[i]=="/"){
                    int c=b/a;
                    st.push(c);
                }
            }
        }
        return st.top();
    }
};
