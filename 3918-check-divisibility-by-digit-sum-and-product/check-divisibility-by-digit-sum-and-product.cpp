class Solution {
public:
    bool checkDivisibility(int n) {
        int original=n;
        int digitsum=0;
        int digitprd=1;

        while(n>0){
            int digit =n%10;
            digitsum+=digit;
            digitprd*=digit;
            n/=10;
        }
        int div=digitsum + digitprd;
        return original % div ==0;
    }
};