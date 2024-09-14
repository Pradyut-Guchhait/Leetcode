#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        // Traverse the digits array from the last digit
        for (int i = n - 1; i >= 0; --i) {
            if (digits[i] < 9) {
                // If the current digit is less than 9, just add one and return the result
                digits[i]++;
                return digits;
            }
            // If the current digit is 9, it becomes 0 and carry 1 to the next digit
            digits[i] = 0;
        }

        // If all digits were 9, you need to add a new digit '1' at the start
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
