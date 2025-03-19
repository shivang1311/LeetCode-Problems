class Solution {
public:
    // shivang agrawal
    int removeElement(vector<int>& nums, int val) {
        vector<int> final;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]!=val) final.push_back(nums[i]);
        }
        for(int i=0; i<final.size(); i++)
        {
            nums[i]=final[i];
        }
        return final.size();
    }
};