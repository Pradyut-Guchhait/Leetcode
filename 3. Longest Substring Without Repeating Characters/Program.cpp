class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        bool ss[128] = {}; // Boolean array to track characters in the current window
        int ans = 0; // Maximum length of substring found
        for (int i = 0, j = 0; j < s.size(); ++j) {
            while (ss[s[j]]) {
                // If s[j] is a duplicate, move i to the right until the duplicate is removed
                ss[s[i++]] = false;
            }
            // Mark s[j] as present in the window
            ss[s[j]] = true;
            // Update the maximum length of the substring
            ans = max(ans, j - i + 1);
        }
        return ans;
    }
};
