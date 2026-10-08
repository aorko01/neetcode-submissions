class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<vector<int>> v(nums.size()+1);
        unordered_map<int,int> mp;
        for (int num:nums)
        {
            mp[num]++;
        }
        for (auto it :mp)
        {
            v[it.second].push_back(it.first);
        }
        vector<int> ans;
        int i=nums.size();
        while(v[i].size()==0 && i>0)
        {
            i--;
        }
        for(;i>=0;i--)
        {
            for(int num:v[i])
            {
                if(k==0)
                break;
                ans.push_back(num);
                k--;
            }
            if(k==0)
            break;
        }
        return ans;
    }
};
