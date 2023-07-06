class Solution {
public:
    double average(vector<int>& salary) {
        double sum=0.0;
        int count=0;

        sort(salary.begin(), salary.end());

        for(int i=1; i<salary.size()-1; i++){
            sum += salary[i];
            count++;
        }
        
        double result = sum / count;
        return result;
    }
};