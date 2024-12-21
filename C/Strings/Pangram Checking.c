//User function Template for C


bool isPanagram(char *s) {
    // Create a boolean array to mark presence of characters
    bool mark[26] = {false};

    // Traverse through all characters in the string
    for (int i = 0; s[i] != '\0'; i++) {
        // If uppercase character, convert to lowercase
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;

        // If lowercase character, mark its presence
        if (s[i] >= 'a' && s[i] <= 'z')
            mark[s[i] - 'a'] = true;
    }

    // Check if all characters are marked
    for (int i = 0; i < 26; i++) {
        if (mark[i] == false)
            return false;
    }

    return true;
}

