class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size(), m = s2.size();

        if (n > m) return false;

        vector<int> freq(26, 0);

        for (char c : s1) {
            freq[c - 'a']++;
        }

        int left = 0;

        for (int right = 0; right < m; right++) {
            freq[s2[right] - 'a']--;

            if (right - left + 1 > n) {
                freq[s2[left] - 'a']++;
                left++;
            }

            if (right - left + 1 == n) {
                bool match = true;

                for (int i = 0; i < 26; i++) {
                    if (freq[i] != 0) {
                        match = false;
                        break;
                    }
                }

                if (match) return true;
            }
        }

        return false;
    }
};