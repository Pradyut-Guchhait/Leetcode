class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size() - 1;  // Start at the last character of the string
        int length = 0;  // Variable to store the length of the last word

        // Skip trailing spaces (if any)
        while (s[i] == ' ') {
            i--;
        }

        // Count the length of the last word
        while (i >= 0 && s[i] != ' ') {
            length++;  // Increment the length for each non-space character
            i--;  // Move backward through the string
        }

        return length;  // Return the length of the last word
    }
};
