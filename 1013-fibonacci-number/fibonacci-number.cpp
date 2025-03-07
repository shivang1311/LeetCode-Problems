class Solution {
public:
    // shivang agrawal

    int fib(int n) {
    // reccursive method
    //     if(n<2) return n;
    //     int fibo = fib(n-1)+fib(n-2);
    //     return fibo; 

    // tabular one
    if(n<2) return n;
    vector<int> dp(n+1,0);
    dp[0]=0;
    dp[1]=1;
    for(int i=2; i<=n; i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
    }
};