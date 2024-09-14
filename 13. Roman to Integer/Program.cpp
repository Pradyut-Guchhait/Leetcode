int romanToInt(char* s) {
int value = 0;
    int prev_value = 0;
    int current_value = 0;
    int i;

    // Define the values for each Roman numeral character
    int roman_values[128] = {0}; // ASCII range 0-127

    roman_values['I'] = 1;
    roman_values['V'] = 5;
    roman_values['X'] = 10;
    roman_values['L'] = 50;
    roman_values['C'] = 100;
    roman_values['D'] = 500;
    roman_values['M'] = 1000;

    int length = strlen(s);

    // Iterate through the string from left to right
    for (i = 0; i < length; ++i) {
        current_value = roman_values[(int)s[i]];

        // If the previous value is smaller, subtract twice the previous value
        if (prev_value < current_value) {
            value += current_value - 2 * prev_value;
        } else {
            value += current_value;
        }

        prev_value = current_value;
    }

    return value;
}
