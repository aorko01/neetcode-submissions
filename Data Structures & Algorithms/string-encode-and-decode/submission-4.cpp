
class Solution {
public:
    string encode(vector<string>& strs) {
        string encoded = "";
        for (string s : strs) {
            encoded += s;
            encoded += '\\';
            encoded += to_string(s.size());
        }
        return encoded;
    }

    vector<string> decode(string s) {
        int left = s.size() - 1;
        int right = left;
        vector<string> decoded;

        while (left >= 0) {
            if (s[left] != '\\') {
                left--;
            } else {
                string size = s.substr(left + 1, right - left);
                int size_num = stoi(size);

                string curr = s.substr(left - size_num, size_num);
                decoded.push_back(curr);

                left = left - size_num - 1;
                right = left;
            }
        }

        reverse(decoded.begin(), decoded.end());
        return decoded;
    }
};
