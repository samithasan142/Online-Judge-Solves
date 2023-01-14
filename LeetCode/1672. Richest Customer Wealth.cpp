class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int val=0;
        int sum=0;
        int row = accounts.size(); 
        int col = accounts[0].size();
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                sum = sum + accounts[i][j];
            }
            val = max(val,sum);
            sum = 0;
        }
        return val;
    }
};