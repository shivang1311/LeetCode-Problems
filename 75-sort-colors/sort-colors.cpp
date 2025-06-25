class Solution {
public:
    void sortColors(vector<int>& nums) {
        int k = 0;
        for(int i=0;i<=2;i++)
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