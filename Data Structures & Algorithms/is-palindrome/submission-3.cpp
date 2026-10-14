class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(),
          [](unsigned char c) { return tolower(c); });
        int i=0,j=s.size();
        while(i<j)
        {
            if (!isalnum(s[i])) i++;
            if (!isalnum(s[j])) j--;
            if (!isalnum(s[i]) || !isalnum(s[j]))
            continue;
            if(s[i]!=s[j])
            return false;
            i++;
            j--;
        }
        return true;
    }
};
