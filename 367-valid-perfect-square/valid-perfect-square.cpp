class Solution {
public:
    //shivang agrawal
    bool isPerfectSquare(int num) {
        for(long long i=1; i<1000000; i++){
            if(i*i==num) return true;
        }
        return false;
    }
};