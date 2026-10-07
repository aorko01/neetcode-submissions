class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            int index=mp[target-nums[i]];
            if(index!=0)
            return {index-1,i};
            mp[nums[i]]=i+1;
        }
        return {0,0};
    }
};