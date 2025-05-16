//User function Template for C

bool isAnagram(char *a, char *b) {
    // Create an array to store the count of characters in string 'a'
    int count[26] = {0};

    // Lengths of both strings
    int len_a = strlen(a);
    int len_b = strlen(b);

    // If lengths are not equal, strings cannot be anagrams
    if (len_a != len_b)
        return false;

    // Increment the count of characters in 'a'
    for (int i = 0; i < len_a; i++)
        count[a[i] - 'a']++;

    // Decrement the count of characters in 'b'
    for (int i = 0; i < len_b; i++) {
        if (count[b[i] - 'a'] == 0)
            return false;
        count[b[i] - 'a']--;
    }

    // If all counts are zero, strings are anagrams
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0)
            return false;
    }

    return true;
}

