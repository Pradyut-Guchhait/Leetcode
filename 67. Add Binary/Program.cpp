class Solution {
public:
    string addBinary(string a, string b) {
        int alen = a.size();  // Length of binary string 'a'
        int blen = b.size();  // Length of binary string 'b'
        string s;  // Temporary string used for padding

        // Pad the shorter string with leading zeros to make both strings the same length
        if(alen > blen) { 
            b = s.append(alen - blen, '0') + b;  // Pad 'b' with zeros
        }
        else if(blen > alen) {
            a = s.append(blen - alen, '0') + a;  // Pad 'a' with zeros
        }

        // Both strings 'a' and 'b' are now of equal length
        int carry = 0;  // Variable to hold the carry-over during addition
        string ans;  // String to store the result

        // Loop from the rightmost end to the left (from least significant bit to most significant bit)
        for(int i = a.size() - 1; i >= 0; i--) {
            // Convert 'a[i]' and 'b[i]' from char ('0' or '1') to int and add them along with the carry
            int sum = (a[i] - '0') + (b[i] - '0') + carry;

            // Calculate the binary digit to be added to the result (either 0 or 1)
            ans = to_string(sum % 2) + ans;

            // Calculate the carry-over (either 0 or 1)
            carry = sum / 2;
        }

        // If there is any carry left after the loop, append '1' at the beginning
        if(carry != 0) ans = "1" + ans;

        return ans;  // Return the final binary sum
    }
};
