//User function Template for C

#include <string.h>

int findPattern(char *s, char *p) {
    int s_len = strlen(s);
    int p_len = strlen(p);

    // Iterate through the string 's'
    for (int i = 0; i <= s_len - p_len; i++) {
        int j;

        // Check if pattern 'p' matches the substring starting at index 'i' of 's'
        for (j = 0; j < p_len; j++) {
            if (s[i + j] != p[j])
                break;
        }

        // If the entire pattern is found at index 'i' of 's', return the index
        if (j == p_len)
            return i;
    }

    // Pattern not found
    return -1;
}


