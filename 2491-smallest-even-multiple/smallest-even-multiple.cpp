class Solution {
public:
    int smallestEvenMultiple(int n) {
        int x;
        for(int i=n; i<=n*2; i++)
        {
            if(i%2==0 && i%n==0)
            {
                x=i;
                break;
            }
        }
        return x;
    }
};