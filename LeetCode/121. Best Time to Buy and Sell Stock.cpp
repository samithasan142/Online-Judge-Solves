/*
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int max = 0;
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(prices[j]-prices[i] > max){
                    max = prices[j]-prices[i];
                }
            }
        }
        return max;
    }
};

// This code got Time Limit Exceed (TLE). Cause the Time Complexity is O(n^2).

*/


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0]; 
        int profit=0;
        for(int i=0; i<prices.size(); i++){
            minPrice = min(minPrice, prices[i]); 
            int diff = prices[i]-minPrice; 
            profit = max(profit, diff);  
        }
        return profit;
    }
};