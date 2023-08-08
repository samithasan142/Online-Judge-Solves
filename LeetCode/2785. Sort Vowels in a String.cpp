class Solution {
public:
    string sortVowels(string s) {
        vector<char> vowel;
        vector<int> position;
        for(int i=0; i<s.size(); i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] =='o' || s[i] == 'u' || 
            s[i] == 'A' || s[i] == 'E' || s[i] == 'O' || s[i] == 'I' || s[i] == 'U') {
                vowel.push_back(s[i]);
                position.push_back(i); 
            }
        }
        sort(vowel.begin(),vowel.end());
        string ans = s;
        for(int i=0; i<position.size(); i++){
            ans[position[i]] = vowel[i];
        }
        return ans;
    }
};