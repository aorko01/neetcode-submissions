class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(auto num:nums)
        mp[num]++;
        vector<pair<int,int>> ans;
        for(auto& it : mp)
        {
            ans.push_back({it.second,it.first});
        }
        sort(ans.begin(),ans.end(),greater<pair<int,int>>());
        vector<int> result;
        for(int i=0;i<k;i++)
        {
            result.push_back(ans[i].second);
        }
        return result ;
    }
};
