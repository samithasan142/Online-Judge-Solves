class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> result;
        for (const string& word : words) {
            string current = "";
            for (char c : word) {
                if (c == separator) {
                    if (!current.empty()) {
                        result.push_back(current);
                        current = "";
                    }
                } else {
                    current += c;
                }
            }
            if (!current.empty()) {
                result.push_back(current);
            }
        }
        return result;
    }
};