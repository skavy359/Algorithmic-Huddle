// User function Template for C

#include <string.h>

int binary_to_decimal(char *binary) {
    int length = strlen(binary);
    int decimal = 0;

    // Traverse the binary string from left to right
    for (int i = 0; i < length; i++) {
        // Convert character to integer
        int digit = binary[i] - '0';
        
        // Multiply the current decimal value by 2 and add the current binary digit
        decimal = decimal * 2 + digit;
    }

    return decimal;
}
