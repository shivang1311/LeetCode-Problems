class Solution {
public:
    int alternateDigitSum(int x) {
        int count = 0;
        int y = x;
        while(y>0)
        {
            count++;
            y/=10;
        }
        int sum = 0;
        int i = 1;
        if(count%2!=0)
        {
            while(x>0)
            {
                int lst = x%10;
                if(i%2!=0) sum+=lst;
                else sum-=lst;
                x/=10;
                i++;
            }
        }
        else
        {
            while(x>0)
            {
                int lst = x%10;
                if(i%2!=0) sum-=lst;
                else sum+=lst;
                x/=10;
                i++;
            }
        }
        return sum;
    }
};