class Solution {
public:
    int tribonacci(int n) {
        if(n==0 || n==1){
            return n;
        }
        vector<int> step(n+1);
        step[0] = 0;
        step[1] = 1;
        step[2] = 1;
        for(int i=3; i<=n; i++){
            step[i] = step[i-1] + step[i-2] + step[i-3];
        }
        return step[n];
    }
};