class Solution {
public:
    //shivang agrawal
    int mySqrt(int x) {
        long a;
        for(long i=1; i<x; i++)
        {
            long b = i*i;
            if(b<=x) continue;
            else{
                a=i-1;
                break;
            }
        }
        return a;
    }
};