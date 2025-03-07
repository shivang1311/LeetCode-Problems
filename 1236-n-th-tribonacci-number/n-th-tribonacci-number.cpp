class Solution {
public:
    // shivang agrawal
    int tribonacci(int n) {
        if(n<2) return n;
        if(n==2) return 1;
        int a = 0;
        int b = 1;
        int c = 1;
        int result;
        for(int i=3; i<=n; i++)
        {
            result=a+b+c;
            a=b;
            b=c;
            c=result;
        }
        return result;
    }
};