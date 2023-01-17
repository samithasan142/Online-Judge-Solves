class Solution {
public:
    int numberOfSteps(int num) {
        int countt = 0;
        while(num>0){
            if(num%2==0){
                num/=2;
                countt++;
            }
            else{
                num-=1;
                countt++;
            } 
        }
        return countt;
    }
};