//User function Template for C

void toBinary(char N[])
{
    // Convert the string representation of decimal number to integer
    int decimal = atoi(N);

    // Flag to indicate if the first significant bit has been encountered
    int significant_bit_found = 0;

    // Convert decimal to binary and print each bit
    for (int i = 31; i >= 0; i--) {
        int bit = (decimal >> i) & 1;
        if (bit == 1 || significant_bit_found) {
            printf("%d", bit);
            significant_bit_found = 1; // Set the flag once the first significant bit is found
        }
    }  
}
