class Solution {
public:
    // shivang agrawal
    bool divideArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size(); i+=2)
        {
            if(nums[i]==nums[i+1]) continue;
            else return false;
        }
        return true;
    }
};