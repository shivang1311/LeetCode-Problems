class Solution {
public:
    // shivang agrawal
    int maximumCount(vector<int>& nums) {
        int neg=0;
        int pos=0;
        int maxi;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]>0) pos++;
            if(nums[i]<0) neg++;
        }
        if(neg>pos) maxi=neg;
        else return pos;
        return maxi;
    }
};