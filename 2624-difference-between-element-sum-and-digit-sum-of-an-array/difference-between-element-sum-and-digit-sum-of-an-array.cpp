class Solution {
public:
    // shivang agrawal
    int differenceOfSum(vector<int>& nums) {
        int elementsum=0;
        int digitsum=0;
        for(int i=0; i<nums.size(); i++)
        {
            elementsum+=nums[i];
            if(nums[i]<10) digitsum+=nums[i];
            else{
                while(nums[i]>0)
                {
                    int lst = nums[i]%10;
                    digitsum+=lst;
                    nums[i]/=10;
                }
            }
        }
        int large = max(elementsum,digitsum);
        int small = min(elementsum,digitsum);
        if(large-small>0) return large-small;
        else return -(large-small);
    }
};