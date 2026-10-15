class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for( int i=0;i<nums.size()-2;i++)
        {
            int first=nums[i];
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            int left = i + 1;
            int right = nums.size()- 1;
            while(left<right)
            {
                if(first+nums[left]+nums[right]==0)
                {
                    ans.push_back({first,nums[left],nums[right]});
                    
                    while(left < right && nums[left]==nums[left+1])
                    {
                        left++;
                    }
                    while(left < right && nums[right]==nums[right-1])
                    {
                        right--;
                    }
                    left++;
                    right--;
                }
                else if(first+nums[left]+nums[right]>0)
                {
                    right--;
                }
                else
                {
                    left++;
                }
            }
        }
        return ans;

    }
};
