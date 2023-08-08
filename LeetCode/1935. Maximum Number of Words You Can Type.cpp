class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_map<char, int> mp;
        for(int i=0; i<brokenLetters.size(); i++){
            mp[brokenLetters[i]]++;
        }

        int count = 0, ans = 0;
        for(int i=0; i<text.size(); i++){
            if(text[i] == ' '){
                if(count == 0)
                    ans++;
                count = 0;
            }else{
                if(mp[text[i]] > 0)
                    count++;
            }
        }
        if(count == 0){
            ans++;
        }
        return ans;
    }
};