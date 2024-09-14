class Solution {
public:
    bool isPalindrome(int x) {
        int n, d, k = 0;

        if (x < 0) return false; // Negative numbers are not palindromes

        n = x; // Store the original number in n
        while (n) {
            d = n % 10; // Extract the last digit
            if (k > (0x7fffffff - d) / 10) return false; // Check for overflow
            k = k * 10 + d; // Build the reversed number
            n = n / 10; // Remove the last digit from n
        }

        return (k == x); // Check if the reversed number is equal to the original
    }
};
