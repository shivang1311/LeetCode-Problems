class Solution {
public:
    // shivang agrawal
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr1;
        vector<int> arr2;
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);
        if(nums.size()>2){
            int j = 2;
            for(int i=2; i<nums.size(); i++)
            {
                int a = arr1.size()-1;
                int b = arr2.size()-1;
                if(arr1[a]>arr2[b])
                {
                    arr1.push_back(nums[j]);
                    j++;
                }
                else
                {
                    arr2.push_back(nums[j]);
                    j++;
                }
            }
        }
        for(int i=0; i<arr2.size(); i++)
        {
            arr1.push_back(arr2[i]);
        }
        return arr1;
    }
};