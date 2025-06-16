class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int max = 0;
        for(int i=0; i<nums.size(); i++)
        {
            for(int j=i; j<nums.size(); j++)
            {
                int a = nums[j]-nums[i];
                if(a>0 && a>max)
                {
                    max = a;
                }
            }
        }
        if(max<=0) return -1;
        return max;
    }
};