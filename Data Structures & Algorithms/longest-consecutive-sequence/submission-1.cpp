class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        for(int num:nums)
        s.insert(num);
        int curr=1,maxi=0;
        int check;
        for(int num:nums)
        {
            check=num-1;
            if(s.find(check)!=s.end())
            continue;
            check=num+1;
            while(s.find(check)!=s.end())
            {
                curr++;
                check++;
            }
            maxi=max(maxi,curr);
            curr=1;
        }
        return maxi;
    }
};
