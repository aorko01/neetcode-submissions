class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<int>> v(strs.size(),vector<int>(26,0));
        for(int i =0;i<strs.size();i++)
        {
            for(char c:strs[i])
            {
                v[i][c-'a']++;
            }
        }
        map<vector<int>,vector<string>> mp;
        for(int i =0;i<v.size();i++)
        {
            mp[v[i]].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for(auto& it:mp)
        {
            ans.push_back(it.second);
        }
        return ans;
    }
};
