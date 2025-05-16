//User function Template for C

char extraChar(char *s1, char *s2) {
    int count[256] = {0}; // Initialize count array to store character frequencies

    // Count characters in s1
    for (int i = 0; s1[i] != '\0'; i++)
        count[s1[i]]++;

    // Count characters in s2
    for (int i = 0; s2[i] != '\0'; i++)
        count[s2[i]]--;

    // Find the extra character
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0)
            return i;
    }

    // Return null character if no extra character found
    return '\0';
}
