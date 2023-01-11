class Solution {
public:
    string toLowerCase(string s) {
        char ch;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
            {
                ch=s[i];
                ch=ch+32;
                s[i]=ch;
            }
        }
        return s;
    }
};