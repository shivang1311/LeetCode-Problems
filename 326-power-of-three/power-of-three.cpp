class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==1) return true;
        else if (n<0) return false;
        double x = n;
        while(x>1.0)
        {
            x/=3;
        }
        if(x==1) return true;
        else return false;
    }
};