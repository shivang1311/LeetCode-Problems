class Solution {
public:
    // shivang agrawal
    int minOperations(vector<int>& nums) {
        int s = nums.size();
        int count = 0;
        for(int i=0; i<(s-2); i++)
        {
            if(nums[i]==0)
            {
                nums[i]=1;
                nums[i+1]^=1;
                nums[i+2]^=1;
                count++;
            }
        }
        if(nums[s-1]==1 && nums[s-2]==1) return count;
        return -1;
    }
};