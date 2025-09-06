#include <bits/stdc++.h>
using namespace std;
class Solution {
 public:
  long long minOperations(vector<vector<int>>& queries) {
    long long ans = 0;
    for (const vector<int>& query : queries) {
      int l = query[0];
      int r = query[1];
      ans += (getOperations(r) - getOperations(l - 1) + 1) / 2;
    }
    return ans;
  }
 private:
  long long getOperations(long long n) {
    if (n <= 0) return 0;
    long long res = 0;
    int ops = 0;
    for (long long powerOfFour = 1; powerOfFour <= n; powerOfFour *= 4) {
      long long l = powerOfFour;
      long long r = min(n, powerOfFour * 4 - 1);
      ++ops;
      res += (r - l + 1) * 1LL * ops;
      if (powerOfFour > (LLONG_MAX / 4)) break;
    }
    return res;
  }
};