class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> exist;
        if(s.size()==0)
        return 0;
        int maxi =1;
        int start=0;
        for(int i=0;i<s.size();i++)
        {
            if(exist.find(s[i])!=exist.end() && exist[s[i]]>=start)
            {
                start=exist[s[i]]+1;
            }
            maxi=max(maxi,(i-start+1));
            exist[s[i]]=i;
        }
        maxi=max(maxi,(int(s.size()-1)-start));
        return maxi;
    }
};
