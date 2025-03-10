class Solution {
public:
    // shivang agrawal
    int countEven(int num) 
    {
        int count = 0;
        for(int i=1; i<=num; i++)
        {
            int x = digitsum(i);
            if(x%2==0) count++;
        }
        return count;
    }
    int digitsum(int x)
    {
        int sum = 0;
        int y = x;
        while(y>0)
        {
            int lst = y%10;
            sum+=lst;
            y/=10;
        }
        return sum;
    }
};