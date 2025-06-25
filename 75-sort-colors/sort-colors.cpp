class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> res;
        int k = 0;
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                if(nums[j]==i)
                {
                    swap(nums[k],nums[j]);
                    k++;
                }
            }
        }
        
    }
};