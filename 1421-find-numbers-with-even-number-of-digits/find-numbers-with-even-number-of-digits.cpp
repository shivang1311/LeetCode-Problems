class Solution {
public:
    // shivang agrawal
    int findNumbers(vector<int>& nums) {
        int even = 0;
        for(int i=0; i<nums.size(); i++)
        {
            int count = 0;
            int a = nums[i];
            while(a>0)
            {
                a/=10;
                count++;
            }
            if(count%2==0) even++;
        }
        return even;
    }
};