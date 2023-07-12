class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        for (int n = names.size(); n > 1; n--) {
            for (int i = 0; i < n - 1; i++) {
                if (heights[i] < heights[i + 1]) {
                    swap(heights[i], heights[i + 1]);
                    swap(names[i], names[i + 1]);
                }
            }
        }
        return names;
    }
};