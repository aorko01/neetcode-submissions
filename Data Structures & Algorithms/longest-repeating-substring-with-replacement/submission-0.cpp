
class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0, right = 0;
        unordered_map<char, int> freq;

        int max_freq = 0;
        int maxi = 0;

        while (right < s.size()) {
            freq[s[right]]++;

            max_freq = max(max_freq, freq[s[right]]);

            int window_size = right - left + 1;

            if (window_size - max_freq > k) {
                freq[s[left]]--;
                left++;
            }

            maxi = max(maxi, right - left + 1);
            right++;
        }

        return maxi;
    }
};
