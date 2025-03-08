class Solution {
public:
    // shivang agrawal
    bool isPowerOfTwo(int n) {
        if(n==1) return true;
        double x = n;
        while(x>1.0)
        {
            x/=2;
        }
        if(x==1) return true;
        else return false;
    }
};