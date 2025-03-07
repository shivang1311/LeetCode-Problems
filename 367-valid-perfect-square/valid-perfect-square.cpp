class Solution {
public:
    //shivang agrawal
    bool isPerfectSquare(int num) {
        bool flag = false;
        for(long i=1; i<=num; i++){
            long sq = i*i;
            if(sq==num){
                flag=true;
                break;
            }
        }
        if(flag==true) return true;
        else return false;
    }
};