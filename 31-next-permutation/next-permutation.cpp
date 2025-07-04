class Solution {
public:
    void reversePart(vector<int>& nums, int i, int j)
    {
        while(i<j)
        {
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
    }
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        // 1) finding pivot index
        int pivot = -1;
        for(int i=n-2; i>=0; i--)
        {
            if(nums[i]<nums[i+1])
            {
                pivot=i;
                break;
            }
        }
        if(pivot==-1) // if array is already greatest
        {
            reversePart(nums,0,n-1);
            return;
        }
        // 2) sorting/revers after pivot
        reversePart(nums,pivot+1,n-1);
        // 3) Finding the just greater element than pivot index
        int j = -1;
        for(int i=pivot+1;i<n;i++)
        {
            if(nums[i]>nums[pivot])
            {
                j=i;
                break;
            }
        }
        // 4) Swapping
        swap(nums[pivot],nums[j]);
    }
};