class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int count = 0;
        int ans = 0;
        for(int i=0; i<gain.size(); i++){
            count += gain[i];
            ans = max(ans, count);
        }
        return ans;
    }
};