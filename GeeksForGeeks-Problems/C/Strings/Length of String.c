//User function Template for C


int lengthString(char *s) {
    int length = 0;
    // Loop through the string until the null terminator is encountered
    while (*s != '\0') {
        length++;
        s++;
    }
    return length;
}
