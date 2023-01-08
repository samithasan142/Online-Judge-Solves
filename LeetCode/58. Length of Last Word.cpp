class Solution {
public:
    int lengthOfLastWord(string s) {
        int countt = 0;
        int temp = 0;
        for(int i = s.length() - 1; i >= 0; i--) {
            if(temp == 0 && s[i] == ' ') {
                continue;
            }
            if(s[i] != ' ') {
                temp = 1;
                countt++;
            } else {
                break;
            }
        }
        return countt;
    }
};