class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size(), m = t.size();
        if (n < m) return "";

        vector<int> freq(128, 0);

        for (char c : t) {
            freq[c]++;
        }

        int left = 0;
        int count = m;

        int mini = INT_MAX;
        int best_left = 0;

        for (int right = 0; right < n; right++) {

            if (freq[s[right]] > 0) {
                count--;
            }

            freq[s[right]]--;

            while (count == 0) {

                if (right - left + 1 < mini) {
                    mini = right - left + 1;
                    best_left = left;
                }

                freq[s[left]]++;

                if (freq[s[left]] > 0) {
                    count++;
                }

                left++;
            }
        }

        if (mini == INT_MAX) return "";

        return s.substr(best_left, mini);
    }
};