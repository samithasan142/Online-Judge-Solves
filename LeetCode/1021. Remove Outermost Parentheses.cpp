class Solution {
public:
    string removeOuterParentheses(string s) {
        string result;
        stack<char> st;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '('){
                if(!st.empty()){
                    result.push_back(s[i]);
                }
                st.push(s[i]);
            }
            else{
                st.pop();
                if(!st.empty()){
                    result.push_back(s[i]);
                }
            }
        }
        return result;
    }
};