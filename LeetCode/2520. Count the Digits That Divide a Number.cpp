class Solution {
public:
    int countDigits(int num) {
        int temp=num;
        int countt=0;
        while(temp>0){
            int val = temp%10;
            if(num%val == 0){
                countt++;
            }
            temp/=10;
        }
        return countt;
    }
};