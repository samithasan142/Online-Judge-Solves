class Solution {
public:
    int maxDepth(string s) {
        int count = 0;
        int maximum = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '('){
                count++;
            }
            if(s[i] == ')'){
                count--;
            }
            maximum = max(maximum, count);
        }
        return maximum;
    }
};