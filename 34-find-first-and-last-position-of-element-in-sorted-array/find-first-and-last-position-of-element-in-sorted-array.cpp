class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res(2,-1);
        int last=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target) 
            {
                res[0]=i;
                last=i;
                break;
            }
        }
        res[1]=last;
        for(int i=nums.size()-1;i>=last+1;i--)
        {
            if(nums[i]==target)
            {
                res[1]=i;
                break;
            }
            else res[1]=last;
        }
        return res;
    }
};