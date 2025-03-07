class Solution {
public:
    //shivang agrawal
    int countDigits(int num) {
        int a = num;
        int count = 0;
        while(a>0){
            int lst = a%10;
            a/=10;
            if(lst!=0){
                if(num%lst==0) count++;
            }
        }
        return count;
    }
};