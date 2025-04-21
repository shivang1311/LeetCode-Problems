class Solution {
public:
    int numberOfArrays(vector<int>& differences, int lower, int upper) {
        long long lowest = 0;
        long long highest = 0;
        long long cur = 0;
        for (int diff : differences) {
            cur += diff;
            if (highest < cur)
                highest = cur;
            else if (lowest > cur)
                lowest = cur;
        }
        long long d = highest - lowest;
        if (upper - lower + 1 < d) 
            return 0;
        return upper - lower + 1 - d;
    }
};