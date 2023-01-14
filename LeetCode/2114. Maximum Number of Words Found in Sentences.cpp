class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n = sentences.size();
        int max = 0;
        for (int i = 0; i < n; i++) {
            int countt = 0;
            for (int j = 0; j < sentences[i].size(); j++) {
                if (sentences[i][j] == ' ') 
                    countt++;
            }
            if (max < countt){
                max = countt;
            }        
        }
        return max + 1;
    }
};