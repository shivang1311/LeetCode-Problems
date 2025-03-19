class Solution {
public:
    // shivang agrawal
    void moveZeroes(vector<int>& nums) {
        vector<int> v;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]!=0) v.push_back(nums[i]);
            nums[i]=0;
        }
        for(int i=0; i<v.size(); i++) nums[i]=v[i];
    }
};